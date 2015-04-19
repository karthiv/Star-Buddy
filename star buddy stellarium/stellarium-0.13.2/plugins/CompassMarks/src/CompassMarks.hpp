/*
 * Copyright (C) 2009 Matthew Gates
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
 
#ifndef COMPASSMARKS_HPP_
#define COMPASSMARKS_HPP_

#include "VecMath.hpp"
#include "StelModule.hpp"
#include "StelFader.hpp"
#include <QFont>

class StelButton;

//! Main class of the Compass Marks plug-in.
//! Provides a ring of marks indicating azimuth on the horizon,
//! like a compass dial.
class CompassMarks : public StelModule
{
	Q_OBJECT
	Q_PROPERTY(bool marksVisible READ getCompassMarks WRITE setCompassMarks NOTIFY compassMarksChanged)
public:
	CompassMarks();
	virtual ~CompassMarks();
	
	///////////////////////////////////////////////////////////////////////////
	// Methods defined in the StelModule class
	virtual void init();
	virtual void update(double deltaTime);
	virtual void draw(StelCore* core);
	virtual double getCallOrder(StelModuleActionName actionName) const;

	bool getCompassMarks() const {return markFader;}

public slots:
	void setCompassMarks(bool b);

	//! Load the plug-in's settings from the configuration file.
	//! Settings are kept in the "CompassMarks" section in Stellarium's
	//! configuration file. If no such section exists, it will load default
	//! values.
	//! @see saveSettings(), restoreDefaultSettings()
	void loadConfiguration();
	//! Save the plug-in's settings to the configuration file.
	//! @warning markColor is not saved.
	//! @todo find a way to save color values without "rounding drift"
	//! (this is especially important for restoring default color values).
	//! @see loadSettings(), restoreDefaultSettings()
	void saveConfiguration();
	void restoreDefaultConfiguration();

signals:
	void compassMarksChanged(bool);
private slots:
	void cardinalPointsChanged(bool b);

private:
	QSettings* conf;
	//! Whether the marks should be displayed at startup.
	bool displayedAtStartup;
	//! Font used for displaying bearing numbers.
	QFont font;
	Vec3f markColor;
	LinearFader markFader;
	StelButton* toolbarButton;
	bool cardinalPointsState;
};


#include <QObject>
#include "StelPluginInterface.hpp"

//! This class is used by Qt to manage a plug-in interface
class CompassMarksStelPluginInterface : public QObject, public StelPluginInterface
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "stellarium.StelGuiPluginInterface/1.0")
	Q_INTERFACES(StelPluginInterface)
public:
	virtual StelModule* getStelModule() const;
	virtual StelPluginInfo getPluginInfo() const;

};

#endif /*COMPASSMARKS_HPP_*/
