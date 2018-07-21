#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hexo_GUI.h"
#include <string>
#include <Tool.h>

using namespace std;

class hexo_GUI : public QMainWindow
{
	Q_OBJECT

public:
	hexo_GUI(QWidget *parent = Q_NULLPTR);
private slots:
	void test(void)
	{
		Easy_message_box::message_box(ABOUT, "test", "test测试", 1);
	}
private:
	Ui::hexo_GUIClass ui;
};
