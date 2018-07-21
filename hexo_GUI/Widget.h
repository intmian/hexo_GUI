#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Widget.h"
#include "qmessagebox.h"
#include "Tool.h"

class Widget : public QMainWindow
{
	Q_OBJECT

public:
	Widget(QWidget *parent = Q_NULLPTR);
private slots:
	void ini_hexo();
private:
	Ui::Form ui;
};
