/********************************************************************************
** Form generated from reading UI file 'hexo_GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXO_GUI_H
#define UI_HEXO_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hexo_GUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *hexo_GUIClass)
    {
        if (hexo_GUIClass->objectName().isEmpty())
            hexo_GUIClass->setObjectName(QStringLiteral("hexo_GUIClass"));
        hexo_GUIClass->resize(600, 400);
        menuBar = new QMenuBar(hexo_GUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        hexo_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(hexo_GUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        hexo_GUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(hexo_GUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        hexo_GUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(hexo_GUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        hexo_GUIClass->setStatusBar(statusBar);

        retranslateUi(hexo_GUIClass);

        QMetaObject::connectSlotsByName(hexo_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *hexo_GUIClass)
    {
        hexo_GUIClass->setWindowTitle(QApplication::translate("hexo_GUIClass", "hexo_GUI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hexo_GUIClass: public Ui_hexo_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXO_GUI_H
