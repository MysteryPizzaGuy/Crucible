/********************************************************************************
** Form generated from reading UI file 'QTTestApp.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTESTAPP_H
#define UI_QTTESTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTTestAppClass
{
public:
    QWidget *centralWidget;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTTestAppClass)
    {
        if (QTTestAppClass->objectName().isEmpty())
            QTTestAppClass->setObjectName(QStringLiteral("QTTestAppClass"));
        QTTestAppClass->resize(600, 400);
        centralWidget = new QWidget(QTTestAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(180, 160, 118, 23));
        progressBar->setValue(24);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(160, 120, 160, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        QTTestAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTTestAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QTTestAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTTestAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTTestAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTTestAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTTestAppClass->setStatusBar(statusBar);

        retranslateUi(QTTestAppClass);

        QMetaObject::connectSlotsByName(QTTestAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTTestAppClass)
    {
        QTTestAppClass->setWindowTitle(QApplication::translate("QTTestAppClass", "QTTestApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTTestAppClass: public Ui_QTTestAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTESTAPP_H
