/*
 * Stellarium
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

#include "StelMainView.hpp"
#include "StelApp.hpp"
#include "StelCore.hpp"
#include "StelFileMgr.hpp"
#include "StelProjector.hpp"
#include "StelModuleMgr.hpp"
#include "StelPainter.hpp"
#include "StelGuiBase.hpp"
#include "StelTranslator.hpp"
#include "StelUtils.hpp"
#include "StelActionMgr.hpp"
#include "StelOpenGL.hpp"
#include "StellariumCoords.hpp"

#include <QDeclarativeItem>
#include <QDebug>
#include <QDir>
#if STEL_USE_NEW_OPENGL_WIDGETS
#include <QOpenGLWidget>
#else
#include <QGLWidget>
#endif
#include <QGuiApplication>
#include <QFileInfo>
#include <QIcon>
#include <QMoveEvent>
#include <QPluginLoader>
#include <QScreen>
#include <QSettings>
#include <QtPlugin>
#include <QThread>
#include <QTimer>
#include <QWidget>
#include <QWindow>
#include <QMessageBox>
#include <QDeclarativeContext>
#ifdef Q_OS_WIN
	#include <QPinchGesture>
#endif
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>

#include <clocale>
#include <QtExtSerialPort/qextserialport.h>
#include <sys/types.h>
#include <QtWidgets/QComboBox>
#include <QtCore/QStringListModel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets>

// Initialize static variables
StelMainView* StelMainView::singleton = NULL;

//! Render Stellarium sky. 
class StelSkyItem : public QDeclarativeItem
{
public:
	StelSkyItem(QDeclarativeItem* parent = NULL);
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = 0);
protected:
	void mousePressEvent(QGraphicsSceneMouseEvent* event);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);
	void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
	void wheelEvent(QGraphicsSceneWheelEvent *event);
	void keyPressEvent(QKeyEvent *event);
	void keyReleaseEvent(QKeyEvent *event);
#ifdef Q_OS_WIN
	bool event(QEvent * e);
#endif
private:
	double previousPaintTime;
	void onSizeChanged();
#ifdef Q_OS_WIN
	void pinchTriggered(QPinchGesture *gesture);
	bool gestureEvent(QGestureEvent *event);
#endif
};

//! Initialize and render Stellarium gui.
class StelGuiItem : public QDeclarativeItem
{
public:
	StelGuiItem(QDeclarativeItem* parent = NULL);
private:
	QGraphicsWidget *widget;
	void onSizeChanged();
};

StelSkyItem::StelSkyItem(QDeclarativeItem* parent)
{
	Q_UNUSED(parent);
	setObjectName("SkyItem");
	setFlag(QGraphicsItem::ItemHasNoContents, false);
	setAcceptHoverEvents(true);
#ifdef Q_OS_WIN
	setAcceptTouchEvents(true);
	grabGesture(Qt::PinchGesture);
#endif
	setAcceptedMouseButtons(Qt::LeftButton | Qt::RightButton | Qt::MiddleButton);
	connect(this, &StelSkyItem::widthChanged, this, &StelSkyItem::onSizeChanged);
	connect(this, &StelSkyItem::heightChanged, this, &StelSkyItem::onSizeChanged);
	previousPaintTime = StelApp::getTotalRunTime();
	StelMainView::getInstance().skyItem = this;
	setFocus(true);
}

void StelSkyItem::onSizeChanged()
{
	StelApp::getInstance().glWindowHasBeenResized(x(), y(), width(), height());
}

void StelSkyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
	Q_UNUSED(option);
	Q_UNUSED(widget);

	const double now = StelApp::getTotalRunTime();
	double dt = now - previousPaintTime;
	previousPaintTime = now;

	painter->beginNativePainting();
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	StelApp::getInstance().update(dt);
	StelApp::getInstance().draw();

	painter->endNativePainting();
}

void StelSkyItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
	//To get back the focus from dialogs
	this->setFocus(true);
	QPointF pos = event->scenePos();
	pos.setY(height() - 1 - pos.y());
	QMouseEvent newEvent(QEvent::MouseButtonPress, QPoint(pos.x(), pos.y()), event->button(), event->buttons(), event->modifiers());
	StelApp::getInstance().handleClick(&newEvent);
}

void StelSkyItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{
	QPointF pos = event->scenePos();
	pos.setY(height() - 1 - pos.y());
	QMouseEvent newEvent(QEvent::MouseButtonRelease, QPoint(pos.x(), pos.y()), event->button(), event->buttons(), event->modifiers());
	StelApp::getInstance().handleClick(&newEvent);
}

void StelSkyItem::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
	QPointF pos = event->scenePos();
	pos.setY(height() - 1 - pos.y());
	StelApp::getInstance().handleMove(pos.x(), pos.y(), event->buttons());
}

void StelSkyItem::wheelEvent(QGraphicsSceneWheelEvent *event)
{
	QPointF pos = event->scenePos();
	pos.setY(height() - 1 - pos.y());
	QWheelEvent newEvent(QPoint(pos.x(),pos.y()), event->delta(), event->buttons(), event->modifiers(), event->orientation());
	StelApp::getInstance().handleWheel(&newEvent);
}

#ifdef Q_OS_WIN
bool StelSkyItem::event(QEvent * e)
{
	switch (e->type()){
	case QEvent::TouchBegin:
	case QEvent::TouchUpdate:
	case QEvent::TouchEnd:
	{
		QTouchEvent *touchEvent = static_cast<QTouchEvent *>(e);
		QList<QTouchEvent::TouchPoint> touchPoints = touchEvent->touchPoints();

		if (touchPoints.count() == 1)
			setAcceptedMouseButtons(Qt::LeftButton | Qt::RightButton | Qt::MiddleButton);

		return true;
	}
		break;

	case QEvent::Gesture:
		setAcceptedMouseButtons(0);
		return gestureEvent(static_cast<QGestureEvent*>(e));
		break;

	default:
		return false;
	}
}

bool StelSkyItem::gestureEvent(QGestureEvent *event)
{
	if (QGesture *pinch = event->gesture(Qt::PinchGesture))
		pinchTriggered(static_cast<QPinchGesture *>(pinch));

	return true;
}

void StelSkyItem::pinchTriggered(QPinchGesture *gesture)
{
	QPinchGesture::ChangeFlags changeFlags = gesture->changeFlags();
	if (changeFlags & QPinchGesture::ScaleFactorChanged) {
		qreal zoom = gesture->scaleFactor();

		if (zoom < 2 && zoom > 0.5){
			StelApp::getInstance().handlePinch(zoom, true);
		}
	}
}
#endif

void StelSkyItem::keyPressEvent(QKeyEvent* event)
{
	StelApp::getInstance().handleKeys(event);
}

void StelSkyItem::keyReleaseEvent(QKeyEvent* event)
{
	StelApp::getInstance().handleKeys(event);
}


StelGuiItem::StelGuiItem(QDeclarativeItem* parent) : QDeclarativeItem(parent)
{
	connect(this, &StelGuiItem::widthChanged, this, &StelGuiItem::onSizeChanged);
	connect(this, &StelGuiItem::heightChanged, this, &StelGuiItem::onSizeChanged);
	widget = new QGraphicsWidget(this);
	StelMainView::getInstance().guiWidget = widget;
	StelApp::getInstance().getGui()->init(widget);
}

void StelGuiItem::onSizeChanged()
{
    // I wish I could find a way to let Qt automatically resize the widget
	// when the QDeclarativeItem size changes.
	widget->setGeometry(0, 0, width(), height());
	StelApp::getInstance().getGui()->forceRefreshGui();
}


#if STEL_USE_NEW_OPENGL_WIDGETS

class StelQOpenGLWidget : public QOpenGLWidget
{
public:
    StelQOpenGLWidget(QWidget* parent) : QOpenGLWidget(parent)
    {
	// TODO: Unclear if tese attributes make sense?
	setAttribute(Qt::WA_PaintOnScreen);
	setAttribute(Qt::WA_NoSystemBackground);
	setAttribute(Qt::WA_OpaquePaintEvent);
    }

protected:
    virtual void initializeGL()
    {
	qDebug() << "It appears this was never called?";
	qDebug() << "OpenGL supported version: " << QString((char*)glGetString(GL_VERSION));

	QOpenGLWidget::initializeGL();
	this->makeCurrent(); // Do we need this?
	// GZ I have no idea how to proceed, sorry.
	QSurfaceFormat format=this->format();
	qDebug() << "Current Format: " << this->format();
	// TODO: Test something? The old tests may be obsolete as all OpenGL2 formats/contexts have these?
    }
    virtual void paintGL()
    {
	// TODO: what shall this do exactly?
    }
    virtual void resizeGL()
    {
	// TODO: what shall this do exactly?
    }

};

#else
class StelQGLWidget : public QGLWidget
{
public:
	StelQGLWidget(QGLContext* ctx, QWidget* parent) : QGLWidget(ctx, parent)
	{
		setAttribute(Qt::WA_PaintOnScreen);
		setAttribute(Qt::WA_NoSystemBackground);
		setAttribute(Qt::WA_OpaquePaintEvent);
	}

protected:
	virtual void initializeGL()
	{
		qDebug() << "It appears this is never called?";
		Q_ASSERT(0);
		qDebug() << "OpenGL supported version: " << QString((char*)glGetString(GL_VERSION));

		QGLWidget::initializeGL();

		qDebug() << "Current Context: " << this->format();
		if (!format().stencil())
			qWarning("Could not get stencil buffer; results will be suboptimal");
		if (!format().depth())
			qWarning("Could not get depth buffer; results will be suboptimal");
		if (!format().doubleBuffer())
			qWarning("Could not get double buffer; results will be suboptimal");
	}

};
#endif


StelMainView::StelMainView(QWidget* parent)
	: QDeclarativeView(parent), gui(NULL),
	  flagInvertScreenShotColors(false),
	  screenShotPrefix("stellarium-"),
	  screenShotDir(""),
	  cursorTimeout(-1.f), flagCursorTimeout(false), minFpsTimer(NULL), maxfps(10000.f)
{
	StelApp::initStatic();
	
	// Can't create 2 StelMainView instances
	Q_ASSERT(!singleton);
	singleton = this;

	setWindowIcon(QIcon(":/mainWindow/icon.bmp"));
	initTitleI18n();
	setObjectName("Mainview");

	// Allows for precise FPS control
	setViewportUpdateMode(QGraphicsView::NoViewportUpdate);
	setFrameShape(QFrame::NoFrame);
	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setFocusPolicy(Qt::StrongFocus);
	connect(this, SIGNAL(screenshotRequested()), this, SLOT(doScreenshot()));

	lastEventTimeSec = 0;


#if STEL_USE_NEW_OPENGL_WIDGETS
	// Primary test for OpenGL existence
	if (QSurfaceFormat::defaultFormat().majorVersion() < 2)
	{
		qWarning() << "No OpenGL 2 support on this system. Aborting.";
		QMessageBox::critical(0, "Stellarium", q_("No OpenGL 2 found on this system. Please upgrade hardware or use MESA or an older version."), QMessageBox::Abort, QMessageBox::Abort);
		exit(0);
	}

	//QSurfaceFormat format();
	//// TBD: What options shall be default?
	//QSurfaceFormat::setDefaultFormat(format);
	////QOpenGLContext* context=new QOpenGLContext::create();
	glWidget = new StelQOpenGLWidget(this);
	//glWidget->setFormat(format);
#else
	// Primary test for OpenGL existence
	if (QGLFormat::openGLVersionFlags() < QGLFormat::OpenGL_Version_2_1)
	{
		qWarning() << "No OpenGL 2.1 support on this system. Aborting.";
		QMessageBox::critical(0, "Stellarium", q_("No OpenGL 2 found on this system. Please upgrade hardware or use MESA or an older version."), QMessageBox::Abort, QMessageBox::Abort);
		exit(1);
	}

	// Create an openGL viewport
	QGLFormat glFormat(QGL::StencilBuffer | QGL::DepthBuffer | QGL::DoubleBuffer);
	// Even if setting a version here, it is ignored in StelQGLWidget()!
	// TBD: Maybe this must make a differentiation between OpenGL and OpenGL ES!
	// glFormat.setVersion(2, 1);
	QGLContext* context=new QGLContext(glFormat);

	if (context->format() != glFormat)
	{
		qWarning() << "Cannot provide OpenGL context. Apparently insufficient OpenGL resources on this system.";
		QMessageBox::critical(0, "Stellarium", q_("Cannot acquire necessary OpenGL resources."), QMessageBox::Abort, QMessageBox::Abort);
		exit(1);
	}
	glWidget = new StelQGLWidget(context, this);
	// This does not return the version number set previously!
	// qDebug() << "glWidget.context.format.version, result:" << glWidget->context()->format().majorVersion() << "." << glWidget->context()->format().minorVersion();
#endif

	setViewport(glWidget);

	// Workaround (see Bug #940638) Although we have already explicitly set
	// LC_NUMERIC to "C" in main.cpp there seems to be a bug in OpenGL where
	// it will silently reset LC_NUMERIC to the value of LC_ALL during OpenGL
	// initialization. This has been observed on Ubuntu 11.10 under certain
	// circumstances, so here we set it again just to be on the safe side.
	setlocale(LC_NUMERIC, "C");
	// End workaround
}

void StelMainView::focusSky() {
	StelMainView::getInstance().scene()->setActiveWindow(0);
	QGraphicsObject* skyItem = rootObject()->findChild<QGraphicsObject*>("SkyItem");
	Q_ASSERT(skyItem);
	skyItem->setFocus();
}

StelMainView::~StelMainView()
{
	StelApp::deinitStatic();
}

void StelMainView::init(QSettings* conf)
{
	// Look for a static GUI plugins.
	foreach (QObject *plugin, QPluginLoader::staticInstances())
	{
		StelGuiPluginInterface* pluginInterface = qobject_cast<StelGuiPluginInterface*>(plugin);
		if (pluginInterface)
		{
			gui = pluginInterface->getStelGuiBase();
		}
		break;
	}
	Q_ASSERT(gui);

#if STEL_USE_NEW_OPENGL_WIDGETS
	//glWidget->initializeGL(); // protected...
	//Q_ASSERT(glWidget->isValid());
#else
	Q_ASSERT(glWidget->isValid());
	glWidget->makeCurrent();
#endif

	// Should be check of requirements disabled?
	if (conf->value("main/check_requirements", true).toBool())
	{
		// Find out lots of debug info about supported version of OpenGL and vendor/renderer.
		processOpenGLdiagnosticsAndWarnings(conf, glWidget);
	}


	stelApp= new StelApp();
	stelApp->setGui(gui);
	stelApp->init(conf);
	StelActionMgr *actionMgr = stelApp->getStelActionManager();
	actionMgr->addAction("actionSave_Screenshot_Global", N_("Miscellaneous"), N_("Save screenshot"), this, "saveScreenShot()", "Ctrl+S");
	actionMgr->addAction("actionSet_Full_Screen_Global", N_("Display Options"), N_("Full-screen mode"), this, "fullScreen", "F11");
	
	StelPainter::initGLShaders();

	setResizeMode(QDeclarativeView::SizeRootObjectToView);
	qmlRegisterType<StelSkyItem>("Stellarium", 1, 0, "StelSky");
	qmlRegisterType<StelGuiItem>("Stellarium", 1, 0, "StelGui");
	rootContext()->setContextProperty("stelApp", stelApp);	
	setSource(QUrl("qrc:/qml/main.qml"));
	
	QSize size = glWidget->windowHandle()->screen()->size();
	size = QSize(conf->value("video/screen_w", size.width()).toInt(),
		     conf->value("video/screen_h", size.height()).toInt());

	bool fullscreen = conf->value("video/fullscreen", true).toBool();

	// Without this, the screen is not shown on a Mac + we should use resize() for correct work of fullscreen/windowed mode switch. --AW WTF???
	resize(size);

	if (fullscreen)
	{
		setFullScreen(true);
	}
	else
	{
		setFullScreen(false);
		int x = conf->value("video/screen_x", 0).toInt();
		int y = conf->value("video/screen_y", 0).toInt();
		move(x, y);	
	}

	flagInvertScreenShotColors = conf->value("main/invert_screenshots_colors", false).toBool();
	setFlagCursorTimeout(conf->value("gui/flag_mouse_cursor_timeout", false).toBool());
	setCursorTimeout(conf->value("gui/mouse_cursor_timeout", 10.f).toFloat());
	maxfps = conf->value("video/maximum_fps",10000.f).toFloat();
	minfps = conf->value("video/minimum_fps",10000.f).toFloat();
	flagMaxFpsUpdatePending = false;

	// XXX: This should be done in StelApp::init(), unfortunately for the moment we need init the gui before the
	// plugins, because the gui create the QActions needed by some plugins.
	StelApp::getInstance().initPlugIns();

	QThread::currentThread()->setPriority(QThread::HighestPriority);
	startMainLoop();
}

// This is a series of various diagnostics based on "bugs" reported for 0.13.0 and 0.13.1.
// Almost all can be traced to insufficient driver level.
// No changes of OpenGL state is done here.
// If problems are detected, warn the user one time, but continue. Warning panel will be suppressed on next start.
// Work in progress, as long as we get reports about bad systems or until OpenGL startup is finalized and safe.
// Several tests do not apply to MacOS X.
#if STEL_USE_NEW_OPENGL_WIDGETS
	void StelMainView::processOpenGLdiagnosticsAndWarnings(QSettings *conf, StelQOpenGLWidget* glWidget) const;
#else
	void StelMainView::processOpenGLdiagnosticsAndWarnings(QSettings *conf, StelQGLWidget* glWidget) const
#endif
{
	QOpenGLContext* context=glWidget->context()->contextHandle();
	QSurfaceFormat format=context->format();

	// These tests are not required on MacOS X
#ifndef Q_OS_MAC
	bool openGLerror=false;
	if (format.renderableType()==QSurfaceFormat::OpenGL || format.renderableType()==QSurfaceFormat::OpenGLES)
	{
		qDebug() << "Detected:" << (format.renderableType()==QSurfaceFormat::OpenGL  ? "OpenGL" : "OpenGL ES" ) << QString("%1.%2").arg(format.majorVersion()).arg(format.minorVersion());
	}
	else
	{
		openGLerror=true;
		qDebug() << "Neither OpenGL nor OpenGL ES detected: Unsupported Format!";
	}
#endif

	QString glDriver(reinterpret_cast<const char*>(glGetString(GL_VERSION)));
	qDebug() << "Driver version string:" << glDriver;
	qDebug() << "GL vendor is" << QString(reinterpret_cast<const char*>(glGetString(GL_VENDOR)));
	QString glRenderer(reinterpret_cast<const char*>(glGetString(GL_RENDERER)));
	qDebug() << "GL renderer is" << glRenderer;
	bool isMesa=glDriver.contains("Mesa", Qt::CaseInsensitive);

	// Minimal required version of OpenGL for Qt5 is 2.1 and OpenGL Shading Language may be 1.20 (or OpenGL ES is 2.0 and GLSL ES is 1.0).
	// As of V0.13.0..1, we use GLSL 1.10/GLSL ES 1.00 (implicitly, by omitting a #version line), but in case of using ANGLE we need hardware
	// detected as providing ps_3_0.
	// This means, usually systems with OpenGL3 support reported in the driver will work, those with reported 2.1 only will almost certainly fail.
	// If platform does not even support minimal OpenGL version for Qt5, then tell the user about troubles and quit from application.
	// This test is apparently not applicable on MacOS X due to its behaving differently from all other known OSes.
	// The correct way to handle driver issues on MacOS X remains however unclear for now.
#ifndef Q_OS_MAC
	if ( openGLerror ||
	     ((format.renderableType()==QSurfaceFormat::OpenGL  ) && (format.version() < QPair<int, int>(2, 1)) && !isMesa) ||
	     ((format.renderableType()==QSurfaceFormat::OpenGL  ) && (format.version() < QPair<int, int>(2, 0)) &&  isMesa) || // Mesa defaults to 2.0 but works!
	     ((format.renderableType()==QSurfaceFormat::OpenGLES) && (format.version() < QPair<int, int>(2, 0)))  )
	{
		#ifdef Q_OS_WIN
		qWarning() << "Oops... Insufficient OpenGL version. Please update drivers, graphics hardware, or use MESA (or ANGLE) version.";
		QMessageBox::critical(0, "Stellarium", q_("Insufficient OpenGL version. Please update drivers, graphics hardware, or use MESA (or ANGLE) version."), QMessageBox::Abort, QMessageBox::Abort);
		#else
		qWarning() << "Oops... Insufficient OpenGL version. Please update drivers, or graphics hardware.";
		QMessageBox::critical(0, "Stellarium", q_("Insufficient OpenGL version. Please update drivers, or graphics hardware."), QMessageBox::Abort, QMessageBox::Abort);
		#endif
		exit(1);
	}
#endif
	// This call requires OpenGL2+.
	QString glslString(reinterpret_cast<const char*>(glGetString(GL_SHADING_LANGUAGE_VERSION)));
	qDebug() << "GL Shading Language version is" << glslString;

	// Only give extended info if called on command line, for diagnostic.
	if (qApp->property("dump_OpenGL_details").toBool())
		dumpOpenGLdiagnostics();

#ifdef Q_OS_WIN
	// If we have ANGLE, check esp. for insufficient ps_2 level.
	if (glRenderer.startsWith("ANGLE"))
	{
		QRegExp angleVsPsRegExp(" vs_(\\d)_(\\d) ps_(\\d)_(\\d)");
		int angleVSPSpos=angleVsPsRegExp.indexIn(glRenderer);

		if (angleVSPSpos >-1)
		{
			float vsVersion=angleVsPsRegExp.cap(1).toFloat() + 0.1*angleVsPsRegExp.cap(2).toFloat();
			float psVersion=angleVsPsRegExp.cap(3).toFloat() + 0.1*angleVsPsRegExp.cap(4).toFloat();
			qDebug() << "VS Version Number after parsing: " << vsVersion;
			qDebug() << "PS Version Number after parsing: " << psVersion;
			if ((vsVersion<2.0) || (psVersion<3.0))
			{
				openGLerror=true;
				qDebug() << "This is not enough: we need DirectX9 with vs_2_0 and ps_3_0 or later.";
				qDebug() << "You should update graphics drivers, graphics hardware, or use the OpenGL-MESA version.";
				qDebug() << "Else, please try to use an older version like 0.12.4, and try there with --safe-mode";

				if (conf->value("main/ignore_opengl_warning", false).toBool())
				{
					qDebug() << "Config option main/ignore_opengl_warning found, continuing. Expect problems.";
				}
				else
				{
					qDebug() << "You can try to run in an unsupported degraded mode by ignoring the warning and continuing.";
					qDebug() << "But more than likely problems will persist.";
					QMessageBox::StandardButton answerButton=
					QMessageBox::critical(0, "Stellarium", q_("Your DirectX/OpenGL ES subsystem has problems. See log for details.\nIgnore and suppress this notice in the future and try to continue in degraded mode anyway?"),
							      QMessageBox::Ignore|QMessageBox::Abort, QMessageBox::Abort);
					if (answerButton == QMessageBox::Abort)
					{
						qDebug() << "Aborting due to ANGLE OpenGL ES / DirectX vs or ps version problems.";
						exit(1);
					}
					else
					{
						qDebug() << "Ignoring all warnings, continuing without further question.";
						conf->setValue("main/ignore_opengl_warning", true);
					}
				}
			}
			else
				qDebug() << "vs/ps version is fine, we should not see a graphics problem.";
		}
		else
		{
			qDebug() << "Cannot parse ANGLE shader version string. This may indicate future problems.";
			qDebug() << "Please send a bug report that includes this log file and states if Stellarium runs or has problems.";
		}
	}
#endif
#ifndef Q_OS_MAC
	// Do a similar test for MESA: Ensure we have at least Mesa 10, Mesa 9 on FreeBSD (used for hardware-acceleration of AMD IGP) was reported to lose the stars.
	if (isMesa)
	{
		QRegExp mesaRegExp("Mesa (\\d+\\.\\d+)"); // we need only major version. Minor should always be here. Test?
		int mesaPos=mesaRegExp.indexIn(glDriver);

		if (mesaPos >-1)
		{
			float mesaVersion=mesaRegExp.cap(1).toFloat();
			qDebug() << "MESA Version Number after parsing: " << mesaVersion;
			if ((mesaVersion<10.0f))
			{
				openGLerror=true;
				qDebug() << "This is not enough: we need Mesa 10.0 or later.";
				qDebug() << "You should update graphics drivers or graphics hardware.";
				qDebug() << "Else, please try to use an older version like 0.12.4, and try there with --safe-mode";

				if (conf->value("main/ignore_opengl_warning", false).toBool())
				{
					qDebug() << "Config option main/ignore_opengl_warning found, continuing. Expect problems.";
				}
				else
				{
					qDebug() << "You can try to run in an unsupported degraded mode by ignoring the warning and continuing.";
					qDebug() << "But more than likely problems will persist.";
					QMessageBox::StandardButton answerButton=
					QMessageBox::critical(0, "Stellarium", q_("Your OpenGL/Mesa subsystem has problems. See log for details.\nIgnore and suppress this notice in the future and try to continue in degraded mode anyway?"),
							      QMessageBox::Ignore|QMessageBox::Abort, QMessageBox::Abort);
					if (answerButton == QMessageBox::Abort)
					{
						qDebug() << "Aborting due to OpenGL/Mesa insufficient version problems.";
						exit(1);
					}
					else
					{
						qDebug() << "Ignoring all warnings, continuing without further question.";
						conf->setValue("main/ignore_opengl_warning", true);
					}
				}
			}
			else
				qDebug() << "Mesa version is fine, we should not see a graphics problem.";
		}
		else
		{
			qDebug() << "Cannot parse Mesa Driver version string. This may indicate future problems.";
			qDebug() << "Please send a bug report that includes this log file and states if Stellarium runs or has problems.";
		}
	}
#endif

	// Although our shaders are only GLSL1.10, there are frequent problems with systems just at this level of programmable shaders.
	// If GLSL version is less than 1.30 or GLSL ES 1.00, Stellarium usually does run properly on Windows or various Linux flavours.
	// Depending on whatever driver/implementation details, Stellarium may crash or show only minor graphical errors.
	// On these systems, we show a warning panel that can be suppressed by a config option which is automatically added on first run.
	// Again, based on a sample size of one, Macs have been reported already to always work in this case.
#ifndef Q_OS_MAC
	QRegExp glslRegExp("^(\\d\\.\\d\\d)");
	int pos=glslRegExp.indexIn(glslString);
	QRegExp glslesRegExp("ES (\\d\\.\\d\\d)");
	int posES=glslesRegExp.indexIn(glslString);
	if (pos >-1)
	{
		float glslVersion=glslRegExp.cap(1).toFloat();
		qDebug() << "GLSL Version Number after parsing: " << glslVersion;
		if (glslVersion<1.3f)
		{
			openGLerror=true;
			qDebug() << "This is not enough: we need GLSL1.30 or later.";
			qDebug() << "You should update graphics drivers, graphics hardware, or use the MESA version.";
			qDebug() << "Else, please try to use an older version like 0.12.4, and try there with --safe-mode";

			if (conf->value("main/ignore_opengl_warning", false).toBool())
			{
				qDebug() << "Config option main/ignore_opengl_warning found, continuing. Expect problems.";
			}
			else
			{
				qDebug() << "You can try to run in an unsupported degraded mode by ignoring the warning and continuing.";
				qDebug() << "But more than likely problems will persist.";
				QMessageBox::StandardButton answerButton=
				QMessageBox::critical(0, "Stellarium", q_("Your OpenGL subsystem has problems. See log for details.\nIgnore and suppress this notice in the future and try to continue in degraded mode anyway?"),
						      QMessageBox::Ignore|QMessageBox::Abort, QMessageBox::Abort);
				if (answerButton == QMessageBox::Abort)
				{
					qDebug() << "Aborting due to OpenGL/GLSL version problems.";
					exit(1);
				}
				else
				{
					qDebug() << "Ignoring all warnings, continuing without further question.";
					conf->setValue("main/ignore_opengl_warning", true);
				}
			}
		}
		else
			qDebug() << "GLSL version is fine, we should not see a graphics problem.";
	}
	else if (posES >-1)
	{
		float glslesVersion=glslesRegExp.cap(1).toFloat();
		qDebug() << "GLSL ES Version Number after parsing: " << glslesVersion;
		if (glslesVersion<1.0) // TBD: is this possible at all?
		{
			openGLerror=true;
			qDebug() << "This is not enough: we need GLSL ES 1.00 or later.";
			qDebug() << "You should update graphics drivers, graphics hardware, or use the OpenGL-MESA version.";
			qDebug() << "Else, please try to use an older version like 0.12.4, and try there with --safe-mode";

			if (conf->value("main/ignore_opengl_warning", false).toBool())
			{
				qDebug() << "Config option main/ignore_opengl_warning found, continuing. Expect problems.";
			}
			else
			{
				qDebug() << "You can try to run in an unsupported degraded mode by ignoring the warning and continuing.";
				qDebug() << "But more than likely problems will persist.";
				QMessageBox::StandardButton answerButton=
				QMessageBox::critical(0, "Stellarium", q_("Your OpenGL ES subsystem has problems. See log for details.\nIgnore and suppress this notice in the future and try to continue in degraded mode anyway?"),
						      QMessageBox::Ignore|QMessageBox::Abort, QMessageBox::Abort);
				if (answerButton == QMessageBox::Abort)
				{
					qDebug() << "Aborting due to OpenGL ES/GLSL ES version problems.";
					exit(1);
				}
				else
				{
					qDebug() << "Ignoring all warnings, continuing without further question.";
					conf->setValue("main/ignore_opengl_warning", true);
				}
			}
		}
		else
		{
			if (openGLerror)
				qDebug() << "GLSL ES version is OK, but there were previous errors, expect problems.";
			else
				qDebug() << "GLSL ES version is fine, we should not see a graphics problem.";
		}
	}
	else
	{
		qDebug() << "Cannot parse GLSL (ES) version string. This may indicate future problems.";
		qDebug() << "Please send a bug report that includes this log file and states if Stellarium works or has problems.";
	}
#endif
}

// Debug info about OpenGL capabilities.
void StelMainView::dumpOpenGLdiagnostics() const
{
	QOpenGLContext *context = QOpenGLContext::currentContext();
	if (context)
	{
		context->functions()->initializeOpenGLFunctions();
		qDebug() << "initializeOpenGLFunctions()...";
	}
	else
		qDebug() << "dumpOpenGLdiagnostics(): No OpenGL context";

	QOpenGLFunctions::OpenGLFeatures oglFeatures=context->functions()->openGLFeatures();
	qDebug() << "OpenGL Features:";
	qDebug() << " - glActiveTexture() function" << (oglFeatures&QOpenGLFunctions::Multitexture ? "is" : "is NOT") << "available.";
	qDebug() << " - Shader functions" << (oglFeatures&QOpenGLFunctions::Shaders ? "are" : "are NOT ") << "available.";
	qDebug() << " - Vertex and index buffer functions" << (oglFeatures&QOpenGLFunctions::Buffers ? "are" : "are NOT") << "available.";
	qDebug() << " - Framebuffer object functions" << (oglFeatures&QOpenGLFunctions::Framebuffers ? "are" : "are NOT") << "available.";
	qDebug() << " - glBlendColor()" << (oglFeatures&QOpenGLFunctions::BlendColor ? "is" : "is NOT") << "available.";
	qDebug() << " - glBlendEquation()" << (oglFeatures&QOpenGLFunctions::BlendEquation ? "is" : "is NOT") << "available.";
	qDebug() << " - glBlendEquationSeparate()" << (oglFeatures&QOpenGLFunctions::BlendEquationSeparate ? "is" : "is NOT") << "available.";
	qDebug() << " - glBlendFuncSeparate()" << (oglFeatures&QOpenGLFunctions::BlendFuncSeparate ? "is" : "is NOT") << "available.";
	qDebug() << " - Blend subtract mode" << (oglFeatures&QOpenGLFunctions::BlendSubtract ? "is" : "is NOT") << "available.";
	qDebug() << " - Compressed texture functions" << (oglFeatures&QOpenGLFunctions::CompressedTextures ? "are" : "are NOT") << "available.";
	qDebug() << " - glSampleCoverage() function" << (oglFeatures&QOpenGLFunctions::Multisample ? "is" : "is NOT") << "available.";
	qDebug() << " - Separate stencil functions" << (oglFeatures&QOpenGLFunctions::StencilSeparate ? "are" : "are NOT") << "available.";
	qDebug() << " - Non power of two textures" << (oglFeatures&QOpenGLFunctions::NPOTTextures ? "are" : "are NOT") << "available.";
	qDebug() << " - Non power of two textures" << (oglFeatures&QOpenGLFunctions::NPOTTextureRepeat ? "can" : "CANNOT") << "use GL_REPEAT as wrap parameter.";
	qDebug() << " - The fixed function pipeline" << (oglFeatures&QOpenGLFunctions::FixedFunctionPipeline ? "is" : "is NOT") << "available.";

	qDebug() << "OpenGL shader capabilities and details:";
	qDebug() << " - Vertex Shader:" << (QOpenGLShader::hasOpenGLShaders(QOpenGLShader::Vertex, context) ? "YES" : "NO");
	qDebug() << " - Fragment Shader:" << (QOpenGLShader::hasOpenGLShaders(QOpenGLShader::Fragment, context) ? "YES" : "NO");
	qDebug() << " - Geometry Shader:" << (QOpenGLShader::hasOpenGLShaders(QOpenGLShader::Geometry, context) ? "YES" : "NO");
	qDebug() << " - TessellationControl Shader:" << (QOpenGLShader::hasOpenGLShaders(QOpenGLShader::TessellationControl, context) ? "YES" : "NO");
	qDebug() << " - TessellationEvaluation Shader:" << (QOpenGLShader::hasOpenGLShaders(QOpenGLShader::TessellationEvaluation, context) ? "YES" : "NO");
	qDebug() << " - Compute Shader:" << (QOpenGLShader::hasOpenGLShaders(QOpenGLShader::Compute, context) ? "YES" : "NO");

	// GZ: List available extensions. Not sure if this is in any way useful?
	QSet<QByteArray> extensionSet=context->extensions();
	qDebug() << "We have" << extensionSet.count() << "OpenGL extensions:";
	QMap<QString, QString> extensionMap;
	QSetIterator<QByteArray> iter(extensionSet);
	while (iter.hasNext())
	{
		if (!iter.peekNext().isEmpty()) // Don't insert empty lines
			extensionMap.insert(QString(iter.peekNext()), QString(iter.peekNext()));
		iter.next();
	}
	QMapIterator<QString, QString> iter2(extensionMap);
	while (iter2.hasNext())
		qDebug() << " -" << iter2.next().key();
	// Apparently EXT_gpu_shader4 is required for GLSL1.3. (http://en.wikipedia.org/wiki/OpenGL#OpenGL_3.0).
	qDebug() << "EXT_gpu_shader4" << (extensionSet.contains(("EXT_gpu_shader4")) ? "present, OK." : "MISSING!");

	QFunctionPointer programParameterPtr =context->getProcAddress("glProgramParameteri");
	if (programParameterPtr == 0)
		qDebug() << "glProgramParameteri cannot be resolved here. BAD!";
	//else
	//	qDebug() << "glProgramParameteri can be resolved. GOOD!";
	programParameterPtr =context->getProcAddress("glProgramParameteriEXT");
	if (programParameterPtr == 0)
		qDebug() << "glProgramParameteriEXT cannot be resolved here. BAD!";
	//else
	//	qDebug() << "glProgramParameteriEXT can be resolved here. GOOD!";

}


void StelMainView::deinit()
{
	deinitGL();
	delete stelApp;
	stelApp = NULL;
}

// Update the translated title
void StelMainView::initTitleI18n()
{
	QString appNameI18n = q_("Stellarium %1").arg(StelUtils::getApplicationVersion());
	setWindowTitle(appNameI18n);
}

void StelMainView::setFullScreen(bool b)
{
	if (b)
		showFullScreen();
	else
		showNormal();
}

void StelMainView::updateScene() {
	// For some reason the skyItem is not updated when the night mode shader is on.
	// To fix this we manually do it here.
	skyItem->update();
	scene()->update();
}

void StelMainView::thereWasAnEvent()
{
	lastEventTimeSec = StelApp::getTotalRunTime();
	//qDebug()<<"thereWasAnEvent";
}

void StelMainView::maxFpsSceneUpdate()
{
	updateScene();
	flagMaxFpsUpdatePending = false;
}

void StelMainView::drawBackground(QPainter*, const QRectF&)
{
	const double now = StelApp::getTotalRunTime();
	const double JD_SECOND=0.000011574074074074074074;

	// Determines when the next display will need to be triggered
	// The current policy is that after an event, the FPS is maximum for 2.5 seconds
	// after that, it switches back to the default minfps value to save power.
	// The fps is also kept to max if the timerate is higher than normal speed.
	const float timeRate = StelApp::getInstance().getCore()->getTimeRate();
	const bool needMaxFps = (now - lastEventTimeSec < 2.5) || fabs(timeRate) > JD_SECOND;
	if (needMaxFps)
	{
		if (!flagMaxFpsUpdatePending)
		{
			double duration = 1./getMaxFps();
			int dur = (int)(duration*1000);

			if (minFpsTimer!=NULL)
			{
				disconnect(minFpsTimer, SIGNAL(timeout()), 0, 0);
				delete minFpsTimer;
				minFpsTimer = NULL;
			}
			flagMaxFpsUpdatePending = true;
			QTimer::singleShot(dur<5 ? 5 : dur, this, SLOT(maxFpsSceneUpdate()));
		}
	} else if (minFpsTimer == NULL) {
		// Restart the minfps timer
		minFpsChanged();
	}

	// Manage cursor timeout
	if (cursorTimeout>0.f && (now-lastEventTimeSec>cursorTimeout) && flagCursorTimeout)
	{
		if (QGuiApplication::overrideCursor()==0)
			QGuiApplication::setOverrideCursor(Qt::BlankCursor);
	}
	else
	{
		if (QGuiApplication::overrideCursor()!=0)
			QGuiApplication::restoreOverrideCursor();
	}
}

void StelMainView::startMainLoop()
{
	// Set a timer refreshing for every minfps frames
	minFpsChanged();
}

void StelMainView::minFpsChanged()
{
	if (minFpsTimer!=NULL)
	{
		disconnect(minFpsTimer, SIGNAL(timeout()), 0, 0);
		delete minFpsTimer;
		minFpsTimer = NULL;
	}

	minFpsTimer = new QTimer(this);
	connect(minFpsTimer, SIGNAL(timeout()), this, SLOT(updateScene()));

	minFpsTimer->start((int)(1./getMinFps()*1000.));
}



void StelMainView::mouseMoveEvent(QMouseEvent* event)
{
	// We notify the applicatio to increase the fps if a button has been
	// clicked, but also if the cursor is currently hidden, so that it gets
	// restored.
	if (event->buttons() || QGuiApplication::overrideCursor()!=0)
		thereWasAnEvent(); // Refresh screen ASAP
	QDeclarativeView::mouseMoveEvent(event);
}

void StelMainView::mousePressEvent(QMouseEvent* event)
{
	thereWasAnEvent(); // Refresh screen ASAP
	qDebug()<<"mousePressEvent";
	
	QDeclarativeView::mousePressEvent(event);
}

void StelMainView::mouseReleaseEvent(QMouseEvent* event)
{
	thereWasAnEvent(); // Refresh screen ASAP
	QDeclarativeView::mouseReleaseEvent(event);
	qDebug()<<qApp->property("global_var_x");
	qDebug()<<qApp->property("global_var_y");
	QString xcord=qApp->property("global_var_x").toString();
	QString ycord=qApp->property("global_var_y").toString();
	xcord=xcord.mid(xcord.indexOf("+")+1,xcord.length());
	ycord=ycord.mid(ycord.indexOf("+")+1,ycord.length());

	//QextSerialPort *port;
 	QStringList list;
    list<<"ttyACM0";
    list<<"ttyACM1";
    list<<"ttyACM2";
    list<<"ttyACM3";
    list<<"ttyACM4";
    list<<"ttyACM5";
    list<<"ttyACM6";
    list<<"ttyACM7";
    list<<"ttyACM8";
    list<<"ttyACM9";
    list<<"ttyACM10";
    list<<"ttyACM11";
    list<<"ttyACM12";
    list<<"ttyACM13";
    list<<"ttyACM14";
	list<<"ttyACM15";
    list<<"ttyACM16";
    list<<"ttyACM17";
    list<<"ttyACM18";
    list<<"ttyACM19";
    
    for( int i=0;i<list.size();i++){
	port = new QextSerialPort(list[i]); //we create the port

	    port->open(QIODevice::ReadWrite | QIODevice::Unbuffered); //we open the port

	    if(port->isOpen())
	    {
	        //QMessageBox::warning(this, "port error", "Impossible to open the port!");
		break;
	    }
	        
	}
    

    //we set the port properties
    port->setBaudRate(BAUD9600);//modify the port settings on your own
    port->setFlowControl(FLOW_OFF);
    port->setParity(PAR_NONE);
    port->setDataBits(DATA_8);
    port->setStopBits(STOP_1);
    QByteArray ba;
    ba.resize(2);
   // ba[0] = 60;
   // ba[1] = 20;

QString portstr="("+xcord+","+ycord+")";

    ba = portstr.toLatin1();
     const char *c_str2 = ba.data();
    port->write(c_str2);
    port->write(ba);
    port->flush();
    port->close();

	
}

void StelMainView::wheelEvent(QWheelEvent* event)
{
	thereWasAnEvent(); // Refresh screen ASAP
	QDeclarativeView::wheelEvent(event);
}

void StelMainView::moveEvent(QMoveEvent * event)
{
	Q_UNUSED(event);

	// We use the glWidget instead of the even, as we want the screen that shows most of the widget.
	StelApp::getInstance().setDevicePixelsPerPixel(glWidget->windowHandle()->devicePixelRatio());
}

void StelMainView::closeEvent(QCloseEvent* event)
{
	Q_UNUSED(event);
	StelApp::getInstance().quit();
}

void StelMainView::keyPressEvent(QKeyEvent* event)
{
	thereWasAnEvent(); // Refresh screen ASAP
	// Try to trigger a gobal shortcut.
	StelActionMgr* actionMgr = StelApp::getInstance().getStelActionManager();
	if (actionMgr->pushKey(event->key() + event->modifiers(), true)) {
		event->setAccepted(true);
		return;
	}
	QDeclarativeView::keyPressEvent(event);
}

void StelMainView::keyReleaseEvent(QKeyEvent* event)
{
	thereWasAnEvent(); // Refresh screen ASAP
	QDeclarativeView::keyReleaseEvent(event);
}


//! Delete openGL textures (to call before the GLContext disappears)
void StelMainView::deinitGL()
{
	StelApp::getInstance().deinit();
	delete gui;
	gui = NULL;
}

void StelMainView::saveScreenShot(const QString& filePrefix, const QString& saveDir)
{
	screenShotPrefix = filePrefix;
	screenShotDir = saveDir;
	emit(screenshotRequested());
}

void StelMainView::doScreenshot(void)
{
	QFileInfo shotDir;
#if STEL_USE_NEW_OPENGL_WIDGETS
	QImage im = glWidget->grabFramebuffer();
#else
	QImage im = glWidget->grabFrameBuffer();
#endif
	if (flagInvertScreenShotColors)
		im.invertPixels();

	if (screenShotDir == "")
		shotDir = QFileInfo(StelFileMgr::getScreenshotDir());
	else
		shotDir = QFileInfo(screenShotDir);

	if (!shotDir.isDir())
	{
		qWarning() << "ERROR requested screenshot directory is not a directory: " << QDir::toNativeSeparators(shotDir.filePath());
		return;
	}
	else if (!shotDir.isWritable())
	{
		qWarning() << "ERROR requested screenshot directory is not writable: " << QDir::toNativeSeparators(shotDir.filePath());
		return;
	}

	QFileInfo shotPath;
	for (int j=0; j<100000; ++j)
	{
		shotPath = QFileInfo(shotDir.filePath() + "/" + screenShotPrefix + QString("%1").arg(j, 3, 10, QLatin1Char('0')) + ".png");
		if (!shotPath.exists())
			break;
	}

	qDebug() << "INFO Saving screenshot in file: " << QDir::toNativeSeparators(shotPath.filePath());
	if (!im.save(shotPath.filePath())) {
		qWarning() << "WARNING failed to write screenshot to: " << QDir::toNativeSeparators(shotPath.filePath());
	}
}

QPoint StelMainView::getMousePos()
{
	return glWidget->mapFromGlobal(QCursor::pos());
}
