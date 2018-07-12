#include "install_judge.h"
#include <Windows.h>//TO BE improve
using namespace std;
bool installer::install_node(std::wstring place)
{
	return false;
}

bool installer::install_git(std::wstring place)
{
	return false;
}

bool installer::search(std::wstring place)
{
	return false;
}

bool installer::start()
{
	if (!search(bin_place))
	{
		MessageBoxA(NULL, "未找到完整的安装文件", "安装被终止", MB_OK);
		return false;
	}
	wstring temp;
	temp = bin_place + L"node";//to change
	if (install_node(temp))
	{
		temp = bin_place + L"git";//to change
		if (!install_git(temp))
		{
			MessageBoxA(NULL,"安装git失败，请重新下载hexo_GUI","安装被终止",MB_OK);
			return false;
		}
	}
	else
	{
		MessageBoxA(NULL, "安装node_js失败，请重新下载hexo_GUI", "安装被终止", MB_OK);
		return false;
	}
	return true;
}

bool installer::startProcess(std::wstring place)
{
	if (_wsystem((L"start "+place).data()) == 0)
		return true;
	else 
		return false;
}

installer::installer(std::wstring place):
	bin_place(place)
{
}
