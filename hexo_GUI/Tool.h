#pragma once
#include <string>
#include "qmessagebox.h"
enum message_Type
{
	WARNING = 0,
	QUESTION = 1,
	ABOUT = 2,
	INFORMATION = 3
};
class Tool
{
public:

private:
};
class Easy_message_box
{
public:
	/*WARNING
	   QUESTION
	  INFOMATION
	  ABOUT
	  输入得非二按钮数量全被视为1*/
	static bool message_box(message_Type type,const char *title,const char *contain, int button_number = 1 )//只能使用一个或两个按钮
	{
		QMessageBox* qm;
		switch (type)
		{
		case WARNING:
		    qm = new QMessageBox(QMessageBox::Icon::Warning, QString::fromLocal8Bit(title),QString::fromLocal8Bit(contain));
			break;
		case QUESTION:
			qm = new QMessageBox(QMessageBox::Icon::Question, QString::fromLocal8Bit(title), QString::fromLocal8Bit(contain));
			break;
		case ABOUT:
			qm = new QMessageBox(QMessageBox::Icon::NoIcon, QString::fromLocal8Bit(title), QString::fromLocal8Bit(contain));
			break;
		case INFORMATION:
			qm = new QMessageBox(QMessageBox::Icon::Information, QString::fromLocal8Bit(title), QString::fromLocal8Bit(contain));
			break;
		default:
			Easy_message_box::message_box(WARNING, "TEST", "WRONGTYPE", 1);
			break;
		}
		if (button_number == 2)
		{
			qm->addButton(QString::fromLocal8Bit("是"), QMessageBox::AcceptRole);
			qm->addButton(QString::fromLocal8Bit("否"), QMessageBox::RejectRole);
		}
		else
		{
			qm->addButton(QString::fromLocal8Bit("是"), QMessageBox::AcceptRole);
		}
		if (qm->exec() == QMessageBox::AcceptRole)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};