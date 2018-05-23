#include "Amber.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Amber w;
	w.Go();
	return a.exec();
}
