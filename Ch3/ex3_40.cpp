#include <iostream>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

int main()
{
	const char ch1[] = "helloworld";
	const char ch2[] = "hello";
	size_t size = strlen(ch1) + strlen("") + strlen(ch2)+1;
	char *ret = new char[size];

	strcpy(ret,ch1);
	strcat(ret,"");
	strcat(ret,ch2);

	cout << ret << endl;
}

/*
ret是指针数组，注意ret需要声明长度，因为array不能实现长度的增加
因为ch1和ch2已经存入ret中，因此直接读取即可，ret是在C风格字符串中特有的操作方法
*/
