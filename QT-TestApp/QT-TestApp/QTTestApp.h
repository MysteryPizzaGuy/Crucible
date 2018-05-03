#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTTestApp.h"
#include <qfile.h>
#include <qtextstream.h>
class QTTestApp : public QMainWindow
{
	Q_OBJECT

public:
	QTTestApp(QWidget *parent = Q_NULLPTR);

private:
	Ui::QTTestAppClass ui;
};
