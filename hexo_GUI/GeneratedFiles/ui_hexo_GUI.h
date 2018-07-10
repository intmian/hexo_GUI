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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hexo_GUIClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *hexo_GUIClass)
    {
        if (hexo_GUIClass->objectName().isEmpty())
            hexo_GUIClass->setObjectName(QStringLiteral("hexo_GUIClass"));
        hexo_GUIClass->resize(600, 400);
        centralWidget = new QWidget(hexo_GUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 611, 371));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        hexo_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(hexo_GUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        hexo_GUIClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(hexo_GUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        hexo_GUIClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());

        retranslateUi(hexo_GUIClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(hexo_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *hexo_GUIClass)
    {
        hexo_GUIClass->setWindowTitle(QApplication::translate("hexo_GUIClass", "hexo_GUI", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("hexo_GUIClass", "\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("hexo_GUIClass", "\344\275\277\347\224\250", Q_NULLPTR));
        menu->setTitle(QApplication::translate("hexo_GUIClass", "\350\256\276\347\275\256", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("hexo_GUIClass", "\345\205\263\344\272\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hexo_GUIClass: public Ui_hexo_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXO_GUI_H
