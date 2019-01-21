#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hexo_GUI.h"
#include "qmessagebox.h"
#include <string>

using namespace std;

class hexo_GUI : public QMainWindow
{
	Q_OBJECT

public:
	hexo_GUI(QWidget *parent = Q_NULLPTR);
private:
	Ui::hexo_GUIClass ui;

	void ChangeTabIndex(int index);

	void connect_slot_signal();
signals:
	void ToChangeTab(int index);  // 切换选项卡

};
