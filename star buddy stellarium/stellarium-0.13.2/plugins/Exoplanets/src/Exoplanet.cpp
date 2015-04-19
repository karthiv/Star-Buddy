/*
 * Copyright (C) 2012 Alexander Wolf
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


#include "Exoplanet.hpp"
#include "Exoplanets.hpp"
#include "StelObject.hpp"
#include "StelPainter.hpp"
#include "StelApp.hpp"
#include "StelCore.hpp"
#include "StelTexture.hpp"
#include "StelUtils.hpp"
#include "StelTranslator.hpp"
#include "StelModuleMgr.hpp"
#include "StelSkyDrawer.hpp"
#include "StelLocaleMgr.hpp"
#include "StarMgr.hpp"

#include <QTextStream>
#include <QDebug>
#include <QVariant>
#include <QVariantMap>
#include <QVariant>
#include <QList>

StelTextureSP Exoplanet::markerTexture;
bool Exoplanet::distributionMode = false;
bool Exoplanet::timelineMode = false;
bool Exoplanet::habitableMode = false;
Vec3f Exoplanet::exoplanetMarkerColor = Vec3f(0.4f,0.9f,0.5f);
Vec3f Exoplanet::habitableExoplanetMarkerColor = Vec3f(1.f,0.5f,0.f);

Exoplanet::Exoplanet(const QVariantMap& map)
		: initialized(false),
		  EPCount(0),
		  PHEPCount(0),
		  designation(""),
		  RA(0.),
		  DE(0.),
		  distance(0.),
		  stype(""),
		  smass(0.),
		  smetal(0.),
		  Vmag(99.),
		  sradius(0.),
		  effectiveTemp(0),
		  hasHabitableExoplanets(false)
{
	// return initialized if the mandatory fields are not present
	if (!map.contains("designation"))
		return;
		
	designation  = map.value("designation").toString();
	RA = StelUtils::getDecAngle(map.value("RA").toString());
	DE = StelUtils::getDecAngle(map.value("DE").toString());
	distance = map.value("distance").toFloat();
	stype = map.value("stype").toString();
	smass = map.value("smass").toFloat();
	smetal = map.value("smetal").toFloat();
	Vmag = map.value("Vmag", 99.f).toFloat();
	sradius = map.value("sradius").toFloat();
	effectiveTemp = map.value("effectiveTemp").toInt();
	hasHabitableExoplanets = map.value("hasHP", false).toBool();

	EPCount=0;
	PHEPCount=0;
	if (map.contains("exoplanets"))
	{
		foreach(const QVariant &expl, map.value("exoplanets").toList())
		{
			QVariantMap exoplanetMap = expl.toMap();
			exoplanetData p;
			EPCount++;
			if (exoplanetMap.contains("planetName")) p.planetName = exoplanetMap.value("planetName").toString();
			p.period = exoplanetMap.value("period", -1.f).toFloat();
			p.mass = exoplanetMap.value("mass", -1.f).toFloat();
			p.radius = exoplanetMap.value("radius", -1.f).toFloat();
			p.semiAxis = exoplanetMap.value("semiAxis", -1.f).toFloat();
			p.eccentricity = exoplanetMap.value("eccentricity", -1.f).toFloat();
			p.inclination = exoplanetMap.value("inclination", -1.f).toFloat();
			p.angleDistance = exoplanetMap.value("angleDistance", -1.f).toFloat();
			p.discovered = exoplanetMap.value("discovered", 0).toInt();
			p.pclass = exoplanetMap.value("pclass", "").toString();			
			if (!p.pclass.isEmpty())
				PHEPCount++;			
			p.EqTemp = exoplanetMap.value("EqTemp", -1).toInt();
			p.ESI = exoplanetMap.value("ESI", -1).toInt();
			exoplanets.append(p);
		}
	}

	initialized = true;
}

Exoplanet::~Exoplanet()
{
	//
}

QVariantMap Exoplanet::getMap(void)
{
	QVariantMap map;
	map["designation"] = designation;
	map["RA"] = RA;
	map["DE"] = DE;
	map["distance"] = distance;
	map["stype"] = stype;
	map["smass"] = smass;
	map["smetal"] = smetal;
	map["Vmag"] = Vmag;
	map["sradius"] = sradius;
	map["effectiveTemp"] = effectiveTemp;
	map["hasHP"] = hasHabitableExoplanets;
	QVariantList exoplanetList;
	foreach(const exoplanetData &p, exoplanets)
	{
		QVariantMap explMap;
		explMap["planetName"] = p.planetName;
		if (p.mass > -1.f) explMap["mass"] = p.mass;
		if (p.period > -1.f) explMap["period"] = p.period;
		if (p.radius > -1.f) explMap["radius"] = p.radius;
		if (p.semiAxis > -1.f) explMap["semiAxis"] = p.semiAxis;
		if (p.inclination > -1.f) explMap["inclination"] = p.inclination;
		if (p.eccentricity > -1.f) explMap["eccentricity"] = p.eccentricity;
		if (p.angleDistance > -1.f) explMap["angleDistance"] = p.angleDistance;
		if (p.discovered > 0) explMap["discovered"] = p.discovered;
		if (!p.pclass.isEmpty()) explMap["pclass"] = p.pclass;		
		if (p.EqTemp > 0) explMap["EqTemp"] = p.EqTemp;
		if (p.ESI > 0) explMap["ESI"] = p.ESI;
		exoplanetList << explMap;
	}
	map["exoplanets"] = exoplanetList;

	return map;
}

float Exoplanet::getSelectPriority(const StelCore *core) const
{
	return StelObject::getSelectPriority(core)-2.f;
}

QString Exoplanet::getNameI18n(void) const
{
	// Use SkyTranslator for translation star names
	const StelTranslator& trans = StelApp::getInstance().getLocaleMgr().getSkyTranslator();
	return trans.qtranslate(designation);
}

QString Exoplanet::getInfoString(const StelCore* core, const InfoStringGroup& flags) const
{
	QString str;
	QTextStream oss(&str);

	if (flags&Name)
	{
		oss << "<h2>" << getNameI18n() << "</h2>";
	}
	
	if (flags&ObjectType)
	{
		oss << q_("Type: <b>%1</b>").arg(q_("planetary system")) << "<br />";
	}

	if (flags&Magnitude)
	{
		if (Vmag<99 && !distributionMode)
		{
			if (core->getSkyDrawer()->getFlagHasAtmosphere())
			{
				oss << q_("Magnitude: <b>%1</b> (extincted to: <b>%2</b>)").arg(QString::number(getVMagnitude(core), 'f', 2),
												QString::number(getVMagnitudeWithExtinction(core), 'f', 2)) << "<br>";
			}
			else
			{
				oss << q_("Magnitude: <b>%1</b>").arg(QString::number(getVMagnitude(core), 'f', 2)) << "<br>";
			}
		}
	}

	// Ra/Dec etc.
	oss << getPositionInfoString(core, flags);

	if (flags&Extra && !stype.isEmpty())
	{
		oss << q_("Spectral Type: %1").arg(stype) << "<br>";
	}

	if (flags&Distance && distance>0)
	{
		//TRANSLATORS: Unit of measure for distance - Light Years
		oss << q_("Distance: %1 ly").arg(QString::number(distance/0.306601, 'f', 2)) << "<br>";
	}

	if (flags&Extra)
	{
		if (smetal!=0)
		{
			oss << QString("%1 [Fe/H]: %2").arg(q_("Metallicity")).arg(smetal) << "<br>";
		}
		if (smass>0)
		{
			oss << QString("%1: %2 M<sub>%3</sub>").arg(q_("Mass")).arg(QString::number(smass, 'f', 3)).arg(q_("Sun")) << "<br>";
		}
		if (sradius>0)
		{
			oss << QString("%1: %2 R<sub>%3</sub>").arg(q_("Radius")).arg(QString::number(sradius, 'f', 5)).arg(q_("Sun")) << "<br>";
		}
		if (effectiveTemp>0)
		{
			oss << q_("Effective temperature: %1 K").arg(effectiveTemp) << "<br>";
		}
		if (exoplanets.size() > 0)
		{
			QString planetNameLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1</td>").arg(q_("Exoplanet"));
			QString periodLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1 (%2)</td>").arg(q_("Period")).arg(q_("days"));
			QString massLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1 (M<sub>%2</sub>)</td>").arg(q_("Mass")).arg(q_("Jup"));
			QString radiusLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1 (R<sub>%2</sub>)</td>").arg(q_("Radius")).arg(q_("Jup"));
			QString semiAxisLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1 (%2)</td>").arg(q_("Semi-Major Axis")).arg(q_("AU"));
			QString eccentricityLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1</td>").arg(q_("Eccentricity"));
			QString inclinationLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1 (%2)</td>").arg(q_("Inclination")).arg(QChar(0x00B0));
			QString angleDistanceLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1 (\")</td>").arg(q_("Angle Distance"));
			QString discoveredLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1</td>").arg(q_("Discovered year"));
			QString pClassLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1</td>").arg(q_("Planetary class"));			
			//TRANSLATORS: Full phrase is "Equilibrium Temperature"
			QString equilibriumTempLabel = QString("<td style=\"padding: 0 2px 0 0;\">%1 (%2C)</td>").arg(q_("Equilibrium temp.")).arg(QChar(0x00B0));
			//TRANSLATORS: ESI = Earth Similarity Index
			QString ESILabel = QString("<td style=\"padding: 0 2px 0 0;\">%1</td>").arg(q_("ESI"));
			foreach(const exoplanetData &p, exoplanets)
			{
				if (!p.planetName.isEmpty())
				{
					planetNameLabel.append("<td style=\"padding:0 2px;\">").append(p.planetName).append("</td>");
				}
				else
				{
					planetNameLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.period > -1.f)
				{
					periodLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.period, 'f', 2)).append("</td>");
				}
				else
				{
					periodLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.mass > -1.f)
				{
					massLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.mass, 'f', 2)).append("</td>");
				}
				else
				{
					massLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.radius > -1.f)
				{
					radiusLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.radius, 'f', 1)).append("</td>");
				}
				else
				{
					radiusLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.eccentricity > -1.f)
				{
					eccentricityLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.eccentricity, 'f', 3)).append("</td>");
				}
				else
				{
					eccentricityLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.inclination > -1.f)
				{
					inclinationLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.inclination, 'f', 1)).append("</td>");
				}
				else
				{
					inclinationLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.semiAxis > -1.f)
				{
					semiAxisLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.semiAxis, 'f', 4)).append("</td>");
				}
				else
				{
					semiAxisLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.angleDistance > -1.f)
				{
					angleDistanceLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.angleDistance, 'f', 6)).append("</td>");
				}
				else
				{
					angleDistanceLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.discovered > 0)
				{
					discoveredLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.discovered)).append("</td>");
				}
				else
				{
					discoveredLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (!p.pclass.isEmpty())
				{
					pClassLabel.append("<td style=\"padding:0 2px;\">").append(getPlanetaryClassI18n(p.pclass)).append("</td>");
				}
				else
				{
					pClassLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}				
				if (p.EqTemp > 0)
				{
					equilibriumTempLabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.EqTemp - 273.15, 'f', 2)).append("</td>");
				}
				else
				{
					equilibriumTempLabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
				if (p.ESI > 0)
				{
					ESILabel.append("<td style=\"padding:0 2px;\">").append(QString::number(p.ESI * 0.01, 'f', 2)).append("</td>");
				}
				else
				{
					ESILabel.append("<td style=\"padding:0 2px;\">&mdash;</td>");
				}
			}
			oss << "<table>";
			oss << "<tr>" << planetNameLabel << "</tr>";
			oss << "<tr>" << periodLabel << "</tr>";
			oss << "<tr>" << massLabel << "</tr>";
			oss << "<tr>" << radiusLabel << "</tr>";
			oss << "<tr>" << semiAxisLabel << "</tr>";
			oss << "<tr>" << eccentricityLabel << "</tr>";
			oss << "<tr>" << inclinationLabel << "</tr>";
			oss << "<tr>" << angleDistanceLabel << "</tr>";
			oss << "<tr>" << discoveredLabel << "</tr>";
			if (hasHabitableExoplanets)
			{
				oss << "<tr>" << pClassLabel << "</tr>";				
				oss << "<tr>" << equilibriumTempLabel << "</tr>";
				oss << "<tr>" << ESILabel << "</tr>";
			}
			oss << "</table>";
		}
	}

	postProcessInfoString(str, flags);
	return str;
}

QString Exoplanet::getPlanetaryClassI18n(QString ptype) const
{
	QString result = "";
	QRegExp dataRx("^(\\w)-(\\w+)\\s(\\w+)$");
	if (dataRx.exactMatch(ptype))
	{
		QString spectral = dataRx.capturedTexts().at(1).trimmed();
		QString zone = dataRx.capturedTexts().at(2).trimmed();
		QString size = dataRx.capturedTexts().at(3).trimmed();

		result = QString("%1-%2 %3")
				.arg(spectral)
				.arg(q_(zone))
				.arg(q_(size));
	}
	return result;
}

Vec3f Exoplanet::getInfoColor(void) const
{
	return Vec3f(1.0, 1.0, 1.0);
}

float Exoplanet::getVMagnitude(const StelCore* core) const
{
	Q_UNUSED(core);
	if (distributionMode)
	{
		return 4.f;
	}
	else
	{
		if (Vmag<99)
		{
			return Vmag;
		}
		else
		{
			return 6.f;
		}
	}
}

double Exoplanet::getAngularSize(const StelCore*) const
{
	return 0.0001;
}

bool Exoplanet::isDiscovered(const StelCore *core)
{
	int year, month, day;
	QList<int> discovery;
	// For getting value of new year from midnight at 1 Jan we need increase a value of JD on 0.5.
	// This hack need for correct display of discovery mode of exoplanets.
	StelUtils::getDateFromJulianDay(core->getJDay()+0.5, &year, &month, &day);
	discovery.clear();
	foreach(const exoplanetData &p, exoplanets)
	{
		if (p.discovered>0)
		{
			discovery.append(p.discovered);
		}
	}
	qSort(discovery.begin(),discovery.end());
	if (!discovery.isEmpty()) 
	{
		if (discovery.at(0)<=year && discovery.at(0)>0)
		{
			return true;
		}
	}
	return false;
}

void Exoplanet::update(double deltaTime)
{
	labelsFader.update((int)(deltaTime*1000));
}

void Exoplanet::draw(StelCore* core, StelPainter *painter)
{
	bool visible;
	StelSkyDrawer* sd = core->getSkyDrawer();
	StarMgr* smgr = GETSTELMODULE(StarMgr); // It's need for checking displaying of labels for stars

	Vec3f color = exoplanetMarkerColor;
	if (hasHabitableExoplanets)
		color = habitableExoplanetMarkerColor;

	StelUtils::spheToRect(RA, DE, XYZ);
	double mag = getVMagnitudeWithExtinction(core);

	glEnable(GL_BLEND);
	glBlendFunc(GL_ONE, GL_ONE);
	painter->setColor(color[0], color[1], color[2], 1);

	if (timelineMode)
	{
		visible = isDiscovered(core);
	}
	else
	{
		visible = true;
	}

	if (habitableMode)
	{
		if (!hasHabitableExoplanets)
			return;
	}

	Vec3d win;
	// Check visibility of exoplanet system
	if(!visible || !(painter->getProjector()->projectCheck(XYZ, win))) {return;}

	float mlimit = sd->getLimitMagnitude();

	if (mag <= mlimit)
	{		
		Exoplanet::markerTexture->bind();
		float size = getAngularSize(NULL)*M_PI/180.*painter->getProjector()->getPixelPerRadAtCenter();
		float shift = 5.f + size/1.6f;

		painter->drawSprite2dMode(XYZ, distributionMode ? 4.f : 5.f);

		if (labelsFader.getInterstate()<=0.f && !distributionMode && (mag+1.f)<mlimit && smgr->getFlagLabels())
		{
			painter->drawText(XYZ, getNameI18n(), 0, shift, shift, false);
		}
	}
}
