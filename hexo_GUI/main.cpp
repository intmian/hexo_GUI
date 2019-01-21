#pragma once
#include "hexo_GUI.h"
#include <QtWidgets/QApplication>
#include "qmessagebox.h"

#include <string>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	hexo_GUI main_win;
	main_win.show();	
	return a.exec();
}