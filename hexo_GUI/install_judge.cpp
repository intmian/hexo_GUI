#include "install_judge.h"
#include <Windows.h>//TO BE improve
#include <cstdlib>
#include <io.h>
#include "Tool.h"
using namespace std;
std::string WStringToString(const std::wstring &wstr)
{
	std::string str;
	int nLen = (int)wstr.length();
	str.resize(nLen, ' ');
	int nResult = WideCharToMultiByte(CP_ACP, 0, (LPCWSTR)wstr.c_str(), nLen, (LPSTR)str.c_str(), nLen, NULL, NULL);
	if (nResult == 0)
	{
		return "";
	}
	return str;
}
QListWidget * operator<<(QListWidget * output, string your_output)
{
	output->addItem(your_output.c_str());
	return output;
}
//重载qlistwidget 的<<运算符
bool Installer::install_node(std::wstring place)
{
	wstring install_place = place + L"\\node.js";
	return startProcess(install_place);
}

bool Installer::install_git(std::wstring place)
{
	wstring install_place = place + L"\\git.js";
	return startProcess(install_place);
}

bool Installer::search(std::wstring place)
{
	wstring js_place = place + L"\\node.js";
	wstring git_place = place + L"\\git";
	if (_access(WStringToString(js_place).data(), 0) != -1 &&
		_access(WStringToString(git_place).data(), 0) != -1)
	{
		return true;
	}
	else
		return false;
}
void Installer::info2win(std::string)
{
	//TO DO
}
bool Installer::start()
{
	if (!search(bin_place))
	{
		MessageBoxA(NULL, "未找到完整的安装文件", "安装被终止", MB_OK);
		return false;
	}
	wstring temp;
	/*
	./
	bin
		node
		git
	data
		setting.ini
	*/
	temp = bin_place + L"node-v8.11.3-x64.msi";
	if (install_node(temp))
	{
		output << string("node.js安装成功");
		temp = bin_place + L"Git-2.18.0-64-bit.exe";
		if (!install_git(temp))
		{
			MessageBoxA(NULL, "安装git失败，请重新下载hexo_GUI", "安装被终止", MB_OK);
			return false;
		}
		else
		{
			output << string("git安装成功");
		}
	}
	else
	{
		MessageBoxA(NULL, "安装node_js失败，请重新下载hexo_GUI", "安装被终止", MB_OK);
		return false;
	}
	Easy_message_box::message_box(QUESTION, "初始化", "当您成功安装git与node.js时电击此处的确认");
	//TODO
	return true;
}

bool Installer::startProcess(std::wstring place)
{
	if (_wsystem((L"start " + place).data()) == 0)
		return true;
	else
		return false;
}

Installer::Installer(std::wstring place, QListWidget* qListWidget) :
	bin_place(place), output(qListWidget)
{
}