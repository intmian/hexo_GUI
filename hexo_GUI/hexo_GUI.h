#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hexo_GUI.h"

class hexo_GUI : public QMainWindow
{
	Q_OBJECT

public:
	hexo_GUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::hexo_GUIClass ui;
};
