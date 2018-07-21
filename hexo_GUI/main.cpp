#pragma once//不想再用ifndef了太麻烦了
#include "hexo_GUI.h"
#include <QtWidgets/QApplication>
#include "qmessagebox.h"
#include <Windows.h>
#include <Widget.h>
#include "Tool.h"
#include <string>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	int int_if_ini;
	char current_directiom[100];
	GetCurrentDirectoryA(200, current_directiom);
	string path = string(current_directiom) + string("\\data\\setting.ini");

	int_if_ini = GetPrivateProfileIntA("ini", "if_ini", -1, path.c_str());
	if (int_if_ini == -1)
	{
		QMessageBox::information(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("配置文件部分丢失，请重新安装"));
		exit(1);
	}
	else if (int_if_ini == 0)
	{
		if (Easy_message_box::message_box(QUESTION, "初始化", "是否直接初始化", 2))
		{
			Widget widge;
			widge.show();
			return a.exec();//exec前置避免在作用域中widge被析构
			//TODO 用工厂模式
		}
		else
		{
			hexo_GUI h;
			h.show();
			return a.exec();
		}
	}
	else
	{
		Easy_message_box::message_box(INFORMATION, "初始化", "请手动将已存在的hexo文件夹拖入根目录",1);
		hexo_GUI h;
		h.show();
		return a.exec();
	}
	//不可能抵达这里
}