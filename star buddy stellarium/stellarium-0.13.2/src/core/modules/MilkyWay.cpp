/*
 * Stellarium
 * Copyright (C) 2002 Fabien Chereau
 * Copyright (C) 2014 Georg Zotti (extinction parts)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA  02110-1335, USA.
 */

#include "MilkyWay.hpp"
#include "StelFader.hpp"
#include "StelTexture.hpp"
#include "StelUtils.hpp"
#include "StelFileMgr.hpp"

#include "StelProjector.hpp"
#include "StelToneReproducer.hpp"
#include "StelApp.hpp"
#include "StelTextureMgr.hpp"
#include "StelCore.hpp"
#include "StelSkyDrawer.hpp"
#include "StelPainter.hpp"

#include <QDebug>
#include <QSettings>

// Class which manages the displaying of the Milky Way
MilkyWay::MilkyWay()
	: color(1.f, 1.f, 1.f)
	, intensity(1.)
	, vertexArray()
{
	setObjectName("MilkyWay");
	fader = new LinearFader();
}

MilkyWay::~MilkyWay()
{
	delete fader;
	fader = NULL;
	
	delete vertexArray;
	vertexArray = NULL;
}

void MilkyWay::init()
{
	QSettings* conf = StelApp::getInstance().getSettings();
	Q_ASSERT(conf);

	tex = StelApp::getInstance().getTextureManager().createTexture(StelFileMgr::getInstallationDir()+"/textures/milkyway_2048.png");
	setFlagShow(conf->value("astro/flag_milky_way").toBool());
	setIntensity(conf->value("astro/milky_way_intensity",1.f).toFloat());

	// A new texture was provided by Fabien. Better resolution, but in equatorial coordinates. I had to enhance it a bit, and shift it by 90 degrees.
	vertexArray = new StelVertexArray(StelPainter::computeSphereNoLight(1.f,1.f,45,15,1, true)); // GZ orig: slices=stacks=20.
	vertexArray->colors.resize(vertexArray->vertex.length());
	vertexArray->colors.fill(Vec3f(1.0, 0.3, 0.9));
}


void MilkyWay::update(double deltaTime)
{
	fader->update((int)(deltaTime*1000));
}

void MilkyWay::setFlagShow(bool b){*fader = b;}
bool MilkyWay::getFlagShow() const {return *fader;}

void MilkyWay::draw(StelCore* core)
{
	if (!getFlagShow())
		return;

	StelProjector::ModelViewTranformP transfo = core->getJ2000ModelViewTransform();

	const StelProjectorP prj = core->getProjection(transfo); // GZ: Maybe this can now be simplified?
	StelToneReproducer* eye = core->getToneReproducer();

	Q_ASSERT(tex);	// A texture must be loaded before calling this

	// This RGB color corresponds to the night blue scotopic color = 0.25, 0.25 in xyY mode.
	// since milky way is always seen white RGB value in the texture (1.0,1.0,1.0)
	// Vec3f c = Vec3f(0.34165f, 0.429666f, 0.63586f);
	// This is the same color, just brighter to have Blue=1.
	//Vec3f c = Vec3f(0.53730381f, .675724216f, 1.0f);
	// The new texture (V0.13.1) is quite blue to start with. It is better to apply white color for it.
	Vec3f c = Vec3f(1.0f, 1.0f, 1.0f);

	float lum = core->getSkyDrawer()->surfacebrightnessToLuminance(11.5f); // Source? How to calibrate the new texture?

	// Get the luminance scaled between 0 and 1
	float aLum =eye->adaptLuminanceScaled(lum*fader->getInterstate());

	// Bound a maximum luminance. GZ: Is there any reference/reason, or just trial and error?
	aLum = qMin(0.38f, aLum*2.f);

	// We must also adjust milky way to light pollution.
	// Is there any way to calibrate this?
	int bortle=core->getSkyDrawer()->getBortleScaleIndex();
	aLum*=(11.0f-bortle)*0.1f;

	// intensity of 1.0 is "proper", but allow boost for dim screens
	c*=aLum*intensity;

	if (c[0]<0) c[0]=0;
	if (c[1]<0) c[1]=0;
	if (c[2]<0) c[2]=0;

	const bool withExtinction=(core->getSkyDrawer()->getFlagHasAtmosphere() && core->getSkyDrawer()->getExtinction().getExtinctionCoefficient()>=0.01f);

	if (withExtinction)
	{
		// We must process the vertices to find geometric altitudes in order to compute vertex colors.
		// Note that there is a visible boost of extinction for higher Bortle indices. I must reflect that as well.
		Extinction extinction=core->getSkyDrawer()->getExtinction();
		vertexArray->colors.clear();

		for (int i=0; i<vertexArray->vertex.size(); ++i)
		{
			Vec3d vertAltAz=core->j2000ToAltAz(vertexArray->vertex.at(i), StelCore::RefractionOn);
			Q_ASSERT(fabs(vertAltAz.lengthSquared()-1.0) < 0.001);

			float oneMag=0.0f;
			extinction.forward(vertAltAz, &oneMag);
			float extinctionFactor=std::pow(0.4f , oneMag) * (1.1f-bortle*0.1f); // drop of one magnitude: factor 2.5 or 40%
			Vec3f thisColor=Vec3f(c[0]*extinctionFactor, c[1]*extinctionFactor, c[2]*extinctionFactor);
			vertexArray->colors.append(thisColor);
		}
	}
	else
		vertexArray->colors.fill(Vec3f(c[0], c[1], c[2]));

	StelPainter sPainter(prj);
	glEnable(GL_CULL_FACE);
	sPainter.enableTexture2d(true);
	glDisable(GL_BLEND);
	tex->bind();
	sPainter.drawStelVertexArray(*vertexArray);
	glDisable(GL_CULL_FACE);
}
