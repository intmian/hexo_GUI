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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hexo_GUIClass
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QPushButton *theme_y_button;
    QPushButton *up_button;
    QPushButton *tsst_button;
    QPushButton *new_blog_button;
    QPushButton *ssh_button;
    QPushButton *open_local_button;
    QPushButton *org_blog_button;
    QPushButton *hexo_y_button;
    QLabel *label;
    QPushButton *test;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *hexo_GUIClass)
    {
        if (hexo_GUIClass->objectName().isEmpty())
            hexo_GUIClass->setObjectName(QStringLiteral("hexo_GUIClass"));
        hexo_GUIClass->resize(482, 470);
        centralWidget = new QWidget(hexo_GUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 210, 481, 231));
        theme_y_button = new QPushButton(centralWidget);
        theme_y_button->setObjectName(QStringLiteral("theme_y_button"));
        theme_y_button->setGeometry(QRect(220, 70, 111, 28));
        up_button = new QPushButton(centralWidget);
        up_button->setObjectName(QStringLiteral("up_button"));
        up_button->setGeometry(QRect(210, 140, 71, 28));
        tsst_button = new QPushButton(centralWidget);
        tsst_button->setObjectName(QStringLiteral("tsst_button"));
        tsst_button->setGeometry(QRect(120, 130, 71, 28));
        new_blog_button = new QPushButton(centralWidget);
        new_blog_button->setObjectName(QStringLiteral("new_blog_button"));
        new_blog_button->setGeometry(QRect(10, 110, 101, 28));
        ssh_button = new QPushButton(centralWidget);
        ssh_button->setObjectName(QStringLiteral("ssh_button"));
        ssh_button->setGeometry(QRect(300, 100, 93, 28));
        open_local_button = new QPushButton(centralWidget);
        open_local_button->setObjectName(QStringLiteral("open_local_button"));
        open_local_button->setGeometry(QRect(40, 30, 151, 28));
        org_blog_button = new QPushButton(centralWidget);
        org_blog_button->setObjectName(QStringLiteral("org_blog_button"));
        org_blog_button->setGeometry(QRect(400, 90, 71, 28));
        hexo_y_button = new QPushButton(centralWidget);
        hexo_y_button->setObjectName(QStringLiteral("hexo_y_button"));
        hexo_y_button->setGeometry(QRect(320, 20, 131, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 190, 72, 15));
        test = new QPushButton(centralWidget);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(330, 150, 93, 28));
        hexo_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(hexo_GUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 482, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        hexo_GUIClass->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());

        retranslateUi(hexo_GUIClass);
        QObject::connect(test, SIGNAL(clicked()), hexo_GUIClass, SLOT(on_test_clicked()));

        QMetaObject::connectSlotsByName(hexo_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *hexo_GUIClass)
    {
        hexo_GUIClass->setWindowTitle(QApplication::translate("hexo_GUIClass", "hexo_GUI", Q_NULLPTR));
        theme_y_button->setText(QApplication::translate("hexo_GUIClass", "\346\237\245\347\234\213theme\346\226\207\344\273\266", Q_NULLPTR));
        up_button->setText(QApplication::translate("hexo_GUIClass", "\344\270\212\344\274\240\345\215\232\345\256\242", Q_NULLPTR));
        tsst_button->setText(QApplication::translate("hexo_GUIClass", "\346\265\213\350\257\225\345\215\232\345\256\242", Q_NULLPTR));
        new_blog_button->setText(QApplication::translate("hexo_GUIClass", "\345\210\233\345\273\272\346\226\260\347\232\204\345\215\232\345\256\242", Q_NULLPTR));
        ssh_button->setText(QApplication::translate("hexo_GUIClass", "\346\237\245\347\234\213SSH\345\257\206\351\222\245", Q_NULLPTR));
        open_local_button->setText(QApplication::translate("hexo_GUIClass", "\346\234\254\345\234\260\346\211\223\345\274\200hexo\346\226\207\344\273\266\345\244\271", Q_NULLPTR));
        org_blog_button->setText(QApplication::translate("hexo_GUIClass", "\347\256\241\347\220\206\345\215\232\346\226\207", Q_NULLPTR));
        hexo_y_button->setText(QApplication::translate("hexo_GUIClass", "\346\237\245\347\234\213hexo\346\240\267\345\274\217\346\226\207\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("hexo_GUIClass", "\345\217\215\351\246\210\360\237\221\207", Q_NULLPTR));
        test->setText(QApplication::translate("hexo_GUIClass", "test", Q_NULLPTR));
        menu->setTitle(QApplication::translate("hexo_GUIClass", "\350\256\276\347\275\256", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("hexo_GUIClass", "\345\205\263\344\272\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hexo_GUIClass: public Ui_hexo_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXO_GUI_H
