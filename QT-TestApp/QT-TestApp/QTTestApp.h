#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTTestApp.h"

class QTTestApp : public QMainWindow
{
	Q_OBJECT

public:
	QTTestApp(QWidget *parent = Q_NULLPTR);

private:
	Ui::QTTestAppClass ui;
};
