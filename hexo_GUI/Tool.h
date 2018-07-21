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
	/*WARNING = 0,
	QUESTION = 1,
	INFOMATION
	ABOUT = 2,*/
	static bool message_box(message_Type type,const char *title,const char *contain, int button_number )//只能使用一个或两个按钮
	{
		switch (type)
		{
		case WARNING:
			QMessageBox qm(QMessageBox::Icon::Warning, QString::fromLocal8Bit);
			break;
		case QUESTION:
			break;
		case ABOUT:
			break;
		case INFORMATION:
			break;
		default:
			break;
		}
	}
};