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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hexo_GUIClass
{
public:
    QWidget *centralWidget;
    QTabWidget *functional_area;
    QWidget *blog_area;
    QPushButton *up_button;
    QPushButton *tsst_button;
    QWidget *article_area;
    QPushButton *new_blog_button;
    QListView *listView;
    QWidget *configure_area;
    QPushButton *open_local_button;
    QPushButton *theme_y_button;
    QPushButton *hexo_y_button;
    QPushButton *ssh_button;
    QPushButton *button_to_blog;
    QPushButton *button_to_article;
    QPushButton *button_to_configuration;
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
        functional_area = new QTabWidget(centralWidget);
        functional_area->setObjectName(QStringLiteral("functional_area"));
        functional_area->setGeometry(QRect(130, 10, 341, 421));
        blog_area = new QWidget();
        blog_area->setObjectName(QStringLiteral("blog_area"));
        up_button = new QPushButton(blog_area);
        up_button->setObjectName(QStringLiteral("up_button"));
        up_button->setGeometry(QRect(30, 60, 71, 28));
        tsst_button = new QPushButton(blog_area);
        tsst_button->setObjectName(QStringLiteral("tsst_button"));
        tsst_button->setGeometry(QRect(30, 100, 71, 28));
        functional_area->addTab(blog_area, QString());
        article_area = new QWidget();
        article_area->setObjectName(QStringLiteral("article_area"));
        new_blog_button = new QPushButton(article_area);
        new_blog_button->setObjectName(QStringLiteral("new_blog_button"));
        new_blog_button->setGeometry(QRect(70, 30, 101, 28));
        listView = new QListView(article_area);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(50, 80, 256, 301));
        functional_area->addTab(article_area, QString());
        configure_area = new QWidget();
        configure_area->setObjectName(QStringLiteral("configure_area"));
        open_local_button = new QPushButton(configure_area);
        open_local_button->setObjectName(QStringLiteral("open_local_button"));
        open_local_button->setGeometry(QRect(20, 80, 151, 28));
        theme_y_button = new QPushButton(configure_area);
        theme_y_button->setObjectName(QStringLiteral("theme_y_button"));
        theme_y_button->setGeometry(QRect(40, 50, 111, 28));
        hexo_y_button = new QPushButton(configure_area);
        hexo_y_button->setObjectName(QStringLiteral("hexo_y_button"));
        hexo_y_button->setGeometry(QRect(70, 210, 131, 28));
        ssh_button = new QPushButton(configure_area);
        ssh_button->setObjectName(QStringLiteral("ssh_button"));
        ssh_button->setGeometry(QRect(50, 300, 93, 28));
        functional_area->addTab(configure_area, QString());
        button_to_blog = new QPushButton(centralWidget);
        button_to_blog->setObjectName(QStringLiteral("button_to_blog"));
        button_to_blog->setGeometry(QRect(20, 100, 93, 28));
        button_to_article = new QPushButton(centralWidget);
        button_to_article->setObjectName(QStringLiteral("button_to_article"));
        button_to_article->setGeometry(QRect(20, 200, 93, 28));
        button_to_configuration = new QPushButton(centralWidget);
        button_to_configuration->setObjectName(QStringLiteral("button_to_configuration"));
        button_to_configuration->setGeometry(QRect(20, 310, 93, 28));
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

        functional_area->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(hexo_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *hexo_GUIClass)
    {
        hexo_GUIClass->setWindowTitle(QApplication::translate("hexo_GUIClass", "hexo_GUI", Q_NULLPTR));
        up_button->setText(QApplication::translate("hexo_GUIClass", "\344\270\212\344\274\240\345\215\232\345\256\242", Q_NULLPTR));
        tsst_button->setText(QApplication::translate("hexo_GUIClass", "\346\265\213\350\257\225\345\215\232\345\256\242", Q_NULLPTR));
        functional_area->setTabText(functional_area->indexOf(blog_area), QApplication::translate("hexo_GUIClass", "\345\215\232\345\256\242", Q_NULLPTR));
        new_blog_button->setText(QApplication::translate("hexo_GUIClass", "\345\210\233\345\273\272\346\226\260\347\232\204\345\215\232\345\256\242", Q_NULLPTR));
        functional_area->setTabText(functional_area->indexOf(article_area), QApplication::translate("hexo_GUIClass", "\345\215\232\346\226\207", Q_NULLPTR));
        open_local_button->setText(QApplication::translate("hexo_GUIClass", "\346\234\254\345\234\260\346\211\223\345\274\200hexo\346\226\207\344\273\266\345\244\271", Q_NULLPTR));
        theme_y_button->setText(QApplication::translate("hexo_GUIClass", "\346\237\245\347\234\213theme\346\226\207\344\273\266", Q_NULLPTR));
        hexo_y_button->setText(QApplication::translate("hexo_GUIClass", "\346\237\245\347\234\213hexo\346\240\267\345\274\217\346\226\207\344\273\266", Q_NULLPTR));
        ssh_button->setText(QApplication::translate("hexo_GUIClass", "\346\237\245\347\234\213SSH\345\257\206\351\222\245", Q_NULLPTR));
        functional_area->setTabText(functional_area->indexOf(configure_area), QApplication::translate("hexo_GUIClass", "\351\205\215\347\275\256", Q_NULLPTR));
        button_to_blog->setText(QApplication::translate("hexo_GUIClass", "\345\215\232\345\256\242", Q_NULLPTR));
        button_to_article->setText(QApplication::translate("hexo_GUIClass", "\345\215\232\346\226\207", Q_NULLPTR));
        button_to_configuration->setText(QApplication::translate("hexo_GUIClass", "\351\205\215\347\275\256", Q_NULLPTR));
        menu->setTitle(QApplication::translate("hexo_GUIClass", "\350\256\276\347\275\256", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("hexo_GUIClass", "\345\205\263\344\272\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hexo_GUIClass: public Ui_hexo_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXO_GUI_H
