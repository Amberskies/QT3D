#include "Display3D.h"
#include <Qt3DExtras/QForwardRenderer>
#include "../Interface/Input.h"

Display3D::Display3D(QScreen *screen)
	: Qt3DWindow(screen)
{
	this->defaultFrameGraph()->setClearColor(Qt::blue);
	m_3DWidget = QWidget::createWindowContainer(this);
	m_3DWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

void Display3D::UpdateDisplay3D()
{
	Input::update();
}

QWidget * Display3D::get3DWidget()
{
	return (QWidget*)m_3DWidget;
}

void Display3D::keyPressEvent(QKeyEvent *event)
{
	if (event->isAutoRepeat())
	{
		event->ignore();
	}
	else
	{
		Input::registerKeyPress(event->key());
	}
}

void Display3D::keyReleaseEvent(QKeyEvent *event)
{
	if (event->isAutoRepeat())
	{
		event->ignore();
	}
	else
	{
		Input::registerKeyRelease(event->key());
	}
}

void Display3D::mousePressEvent(QMouseEvent *event)
{
	Input::registerMousePress(event->button());
}

void Display3D::mouseReleaseEvent(QMouseEvent *event)
{
	Input::registerMouseRelease(event->button());
}
