#include "Tool.h"

bool Easy_message_box::message_box(message_Type type, const char * title, const char * contain, int button_number)
{
	QMessageBox* qm;
	switch (type)
	{
	case WARNING:
		qm = new QMessageBox(QMessageBox::Icon::Warning, QString::fromLocal8Bit(title), QString::fromLocal8Bit(contain));
		break;
	case QUESTION:
		qm = new QMessageBox(QMessageBox::Icon::Question, QString::fromLocal8Bit(title), QString::fromLocal8Bit(contain));
		break;
	case ABOUT:
		qm = new QMessageBox(QMessageBox::Icon::NoIcon, QString::fromLocal8Bit(title), QString::fromLocal8Bit(contain));
		break;
	case INFORMATION:
		qm = new QMessageBox(QMessageBox::Icon::Information, QString::fromLocal8Bit(title), QString::fromLocal8Bit(contain));
		break;
	default:
		Easy_message_box::message_box(WARNING, "TEST", "WRONGTYPE", 1);
		break;
	}
	if (button_number == 2)
	{
		qm->addButton(QString::fromLocal8Bit("ÊÇ"), QMessageBox::AcceptRole);
		qm->addButton(QString::fromLocal8Bit("·ñ"), QMessageBox::RejectRole);
	}
	else
	{
		qm->addButton(QString::fromLocal8Bit("ÊÇ"), QMessageBox::AcceptRole);
	}
	if (qm->exec() == QMessageBox::AcceptRole)
	{
		return true;
	}
	else
	{
		return false;
	}
}
