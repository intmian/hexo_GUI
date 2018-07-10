#ifndef _CSTDLIB
#include <cstdlib>
#define _CSTDLIB
#endif // !_CSTDLIB

#ifndef _STRING
#define _STRING
#include <string>
#endif // !_STRING


#ifndef _CLASS_installer
#define _CLASS_installer
class installer
{
private:
	bool install_node(std::string place);//安装node.js place即node js地址
	bool install_git(std::string place);//安装git place即git地址
	bool search(std::string place);
	std::string bin_place;
public:
	installer(std::string place);//place是exe的上一层文件夹
};
#endif // !_CLASS_installer
