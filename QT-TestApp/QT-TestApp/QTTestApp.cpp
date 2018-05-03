#include "QTTestApp.h"

QTTestApp::QTTestApp(QWidget *parent)
	: QMainWindow(parent)
{
	QFile f(":qdarkstyle/style.qss");
	if (!f.exists())
	{
		printf("Unable to set stylesheet, file not found\n");
	}
	else
	{
		f.open(QFile::ReadOnly | QFile::Text); 
		QTextStream ts(&f);
		qApp->setStyleSheet(ts.readAll());
	}
	ui.setupUi(this);
}
