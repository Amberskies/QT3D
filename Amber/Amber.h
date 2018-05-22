#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Amber.h"

class Amber : public QMainWindow
{
	Q_OBJECT

public:
	Amber(QWidget *parent = Q_NULLPTR);

private:
	Ui::AmberClass ui;
};
