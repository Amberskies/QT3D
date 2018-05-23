#pragma once
#include <QObject>
#include <QWidget>
#include <QKeyEvent>
#include <QMouseEvent>
#include <Qt3DExtras/Qt3DWindow>

class Display3D : public Qt3DExtras::Qt3DWindow
{
	Q_OBJECT

	QWidget *m_3DWidget;

public:
	Display3D(QScreen *screen = nullptr);
	void UpdateDisplay3D();
	QWidget * get3DWidget();

protected:
	void keyPressEvent(QKeyEvent *event);
	void keyReleaseEvent(QKeyEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
};
