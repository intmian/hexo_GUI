﻿#ifndef _CSTDLIB
#include <cstdlib>
#define _CSTDLIB
#endif // !_CSTDLIB

#ifndef _STRING
#define _STRING
#include <string>
#endif // !_STRING
#ifndef _QTLIST
#include <QtWidgets/QListWidget>
#define _QTLIST
#endif // !_QTLIST




#ifndef _CLASS_Installer
#define _CLASS_Installer
class Installer
{
private:
	bool install_node(std::wstring place);//安装node.js place即node js地址
	bool install_git(std::wstring place);//安装git place即git地址
	bool startProcess(std::wstring place);
	bool search(std::wstring place);
	void info2win(std::string);//把消息传到预留的槽中
	std::wstring bin_place;
	QListWidget * output;
public:
	bool start();
	Installer(std::wstring place, QListWidget* qListWidge);//place是exe的上一层文件夹
};
#endif // !_CLASS_Installer

std::string WStringToString(const std::wstring & wstr);
