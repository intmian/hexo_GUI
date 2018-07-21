#pragma once
#include "Widget.h"
#include "install_judge.h"
#include "Tool.h"
#include <Windows.h>
#include <string>
#include <ui_Widget.h>

using namespace std;

Widget::Widget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}
void Widget::ini_hexo()
{

	TCHAR current_directiom[100];
	GetCurrentDirectoryW(200, current_directiom);
	wstring path(current_directiom);
	Installer in(path + L"\\bin",ui.listWidget);
	in.start();
}