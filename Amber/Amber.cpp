#include "Amber.h"

Amber::Amber(QWidget *parent)
	: QMainWindow(parent)
	, rootEntity(new Qt3DCore::QEntity)
	, m_display3D(new Display3D)
{
	// create the CoreEngine controller. 
	m_coreEngine = new CoreEngine(rootEntity);
	
	// setup the signal and slot for mainloop.
	connect(&m_mainLoop, SIGNAL(timeout()), this, SLOT(MainUpdate()));

	// Setup and display the Developers Interface
	ui.setupUi(this);
	this->show();
}

Amber::~Amber()
{
	// Stop the Qt3D Engine
	m_display3D->setRootEntity(nullptr);

	// Shutdown all objects in reverse order
	m_coreEngine->~CoreEngine();
	m_display3D->~Display3D();

	// Note to the Debug window that cleanup completed.
	qWarning("Amber Shutdown : Cleanup complete.");
}

void Amber::Go()
{
	// Insert the Qt3D Viewport into the Interface
	ui.DisplayLayout->insertWidget(1, m_display3D->get3DWidget());

	// Initialize the coreEngine
	m_coreEngine->InitializeEngine();

	// start the Qt3D Engine
	m_display3D->setRootEntity(rootEntity);

	// Start the mainLoop
	m_mainLoop.start(10);
}


void Amber::MainUpdate()
{
	m_mainLoop.stop();
	// Main Program Loop START.
	m_display3D->UpdateDisplay3D();
	m_coreEngine->UpdateEngine();
	// Main Program Loop END.
	m_mainLoop.start(10);
}

void Amber::on_pushButton_clicked()
{
	qWarning("Button 1 clicked");
}

void Amber::on_pushButton_2_clicked()
{
	close();
}

void Amber::on_pushButton_3_clicked()
{
	qWarning("Button 3 clicked");
}

//////////////////////////////////////////////////////////////////////////////////////



