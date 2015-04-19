/*
 * Copyright (C) 2007 Fabien Chereau
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

#ifndef HELLOSTELMODULE_HPP_
#define HELLOSTELMODULE_HPP_

#include "StelModule.hpp"
#include <QFont>

//! This is an example of a plug-in which can be dynamically loaded into stellarium
class HelloStelModule : public StelModule
{
public:
	HelloStelModule();
	virtual ~HelloStelModule();

	///////////////////////////////////////////////////////////////////////////
	// Methods defined in the StelModule class
	virtual void init();
	virtual void update(double) {;}
	virtual void draw(StelCore* core);
	virtual double getCallOrder(StelModuleActionName actionName) const;
private:
	// Font used for displaying our text
	QFont font;
};


#include <QObject>
#include "StelPluginInterface.hpp"

//! This class is used by Qt to manage a plug-in interface
class HelloStelModuleStelPluginInterface : public QObject, public StelPluginInterface
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "stellarium.StelGuiPluginInterface/1.0")
	Q_INTERFACES(StelPluginInterface)
public:
	virtual StelModule* getStelModule() const;
	virtual StelPluginInfo getPluginInfo() const;
};

#endif /*HELLOSTELMODULE_HPP_*/
