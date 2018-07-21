#pragma once//不想再用ifndef了太麻烦了
#include "hexo_GUI.h"
#include <QtWidgets/QApplication>
#include "qmessagebox.h"
#include <Windows.h>
#include <Widget.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	int int_if_ini;

	int_if_ini = GetPrivateProfileIntA("ini", "if_ini", -1, "./data/setting.ini");
	if (int_if_ini = -1)
	{
		QMessageBox::information(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("配置文件部分丢失，请重新安装"));
		exit(1);
	}
	else if (int_if_ini = 0)
	{
		auto button_return = QMessageBox::question(NULL, QString::fromLocal8Bit("初始化"),
			QString::fromLocal8Bit("是否初始化"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		if (button_return == QMessageBox::Yes)
		{
			Widget widget;
			widget.show();
		}
		else
		{
			hexo_GUI w;
			w.show();
		}
	}
	return a.exec();
}