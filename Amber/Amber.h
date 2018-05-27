#pragma once

#include <QMainWindow>
#include <QTimer>
#include "ui_Amber.h"

#include <Qt3DCore/QEntity>

#include "Rendering/Display3D.h"
#include "Core/CoreEngine.h"

class Amber : public QMainWindow
{
	Q_OBJECT

public:
	explicit Amber(QWidget *parent = Q_NULLPTR);
	virtual ~Amber();

	void Go();

private slots:
	void MainUpdate();
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();

private:
	Ui::Amber ui;
	QTimer m_mainLoop;
	Display3D *m_display3D;
	Qt3DCore::QEntity *rootEntity;
	CoreEngine *m_coreEngine;
};
