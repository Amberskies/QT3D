#include "Amber.h"

Amber::Amber(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->show();
	connect(&m_mainLoop, SIGNAL(timeout()), this, SLOT(MainUpdate()));

	
}

Amber::~Amber()
{
}

void Amber::Go()
{
	m_display3D = new Display3D();
	ui.DisplayLayout->insertWidget(1, m_display3D->get3DWidget());

	m_mainLoop.start(10);
}


void Amber::MainUpdate()
{
	m_mainLoop.stop();
	// Main Program Loop START.
	m_display3D->UpdateDisplay3D();
	// Main Program Loop END.
	m_mainLoop.start(10);
}

void Amber::on_pushButton_clicked()
{
	qWarning("Button 1 clicked");
}

void Amber::on_pushButton_2_clicked()
{
	exit(0);
}

void Amber::on_pushButton_3_clicked()
{
	qWarning("Button 3 clicked");
}

//////////////////////////////////////////////////////////////////////////////////////



