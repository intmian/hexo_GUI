#include "install_judge.h"
#include <Windows.h>//TO BE improve
using namespace std;
bool installer::install_node(std::string place)
{
	return false;
}

bool installer::install_git(std::string place)
{
	return false;
}

bool installer::search(std::string place)
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
	string temp;
	temp = bin_place + "node";//to change
	if (install_node(temp))
	{
		temp = bin_place + "git";//to change
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

bool installer::startProcess(std::string place)
{
	_wsystem(place.data());
}

installer::installer(std::string place):
	bin_place(place)
{
}
