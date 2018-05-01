#include "QTTestApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTTestApp w;
	w.show();
	return a.exec();
}
