/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
	QPushButton * pushButton;
	QListView *listView;

	void setupUi(QWidget *Form)
	{
		if (Form->objectName().isEmpty())
			Form->setObjectName(QStringLiteral("Form"));
		Form->resize(346, 410);
		pushButton = new QPushButton(Form);
		pushButton->setObjectName(QStringLiteral("pushButton"));
		pushButton->setGeometry(QRect(120, 340, 93, 28));
		listView = new QListView(Form);
		listView->setObjectName(QStringLiteral("listView"));
		listView->setGeometry(QRect(40, 30, 256, 281));

		retranslateUi(Form);

		QMetaObject::connectSlotsByName(Form);
	} // setupUi

	void retranslateUi(QWidget *Form)
	{
		Form->setWindowTitle(QApplication::translate("Form", "\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
		pushButton->setText(QApplication::translate("Form", "\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
	} // retranslateUi
};

namespace Ui {
	class Form : public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
