#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hexo_GUI.h"
#include "qmessagebox.h"

class Widget : public QMainWindow
{
	Q_OBJECT

public:
	Widget(QWidget *parent = Q_NULLPTR);
private slots:
private:
	Ui::hexo_GUIClass ui;
};
