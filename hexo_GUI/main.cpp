#pragma once//不想再用ifndef了太麻烦了
#include "hexo_GUI.h"
#include <QtWidgets/QApplication>
#include "qmessagebox.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	hexo_GUI w;
	w.show();
	return a.exec();
}