#pragma once
#include <string>
#include "qmessagebox.h"
#include <cstdio>
enum message_Type
{
	WARNING = 0,
	QUESTION = 1,
	ABOUT = 2,
	INFORMATION = 3
};
class Tool
{
public:

private:
};
class Easy_message_box//解决中文乱码，并将按钮本土化
{
public:
	/*WARNING
	   QUESTION
	  INFOMATION
	  ABOUT
	  输入得非二按钮数量全被视为1*/
	static bool message_box(message_Type type, const char *title, const char *contain, int button_number = 1);//只能使用一个或两个按钮
};
class Run_code
{
private:
	FILE * PPipe;
};