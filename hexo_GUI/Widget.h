#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Widget.h"
#include "qmessagebox.h"

class Widget : public QMainWindow
{
	Q_OBJECT

public:
	Widget(QWidget *parent = Q_NULLPTR);
private slots:
private:
	Ui::Form ui;
};
