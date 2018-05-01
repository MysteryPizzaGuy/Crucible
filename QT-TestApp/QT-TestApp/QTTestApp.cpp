#include "QTTestApp.h"

QTTestApp::QTTestApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), ui.progressBar, SLOT(setvalue(int)));
}
