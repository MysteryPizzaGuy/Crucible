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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTTestAppClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTTestAppClass)
    {
        if (QTTestAppClass->objectName().isEmpty())
            QTTestAppClass->setObjectName(QStringLiteral("QTTestAppClass"));
        QTTestAppClass->resize(730, 541);
        centralWidget = new QWidget(QTTestAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);


        horizontalLayout_2->addWidget(frame_2);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 430));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);


        horizontalLayout->addWidget(frame);


        verticalLayout->addLayout(horizontalLayout);

        QTTestAppClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTTestAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTTestAppClass->setStatusBar(statusBar);

        retranslateUi(QTTestAppClass);

        QMetaObject::connectSlotsByName(QTTestAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTTestAppClass)
    {
        QTTestAppClass->setWindowTitle(QApplication::translate("QTTestAppClass", "QTTestApp", nullptr));
        comboBox->setItemText(0, QApplication::translate("QTTestAppClass", "Character Burning", nullptr));
        comboBox->setItemText(1, QApplication::translate("QTTestAppClass", "Character Layout", nullptr));

        pushButton->setText(QApplication::translate("QTTestAppClass", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("QTTestAppClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTTestAppClass: public Ui_QTTestAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTESTAPP_H
