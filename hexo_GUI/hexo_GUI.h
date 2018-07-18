#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hexo_GUI.h"
#include "qmessagebox.h"

class hexo_GUI : public QMainWindow
{
	Q_OBJECT

public:
	hexo_GUI(QWidget *parent = Q_NULLPTR);
private slots:
	void on_test_clicked()
	{
		QMessageBox::information(this, "test", "test");
	}
private:
	Ui::hexo_GUIClass ui;
};
