#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

int main()
{
	const char *s1 = "Hello";
	const char *s2 = "helloworld";

	auto ret = strcmp(s1,s2);
	cout << ret << endl;
	if(ret == 0)
		cout << "these two strings are the same" << endl;
	if(ret > 0)
		cout << "s1 > s2" << endl;
	if(ret < 0)
		cout << "s1 < s2" << endl;

	return 0;
}

/*
C风格字符串中，需要用指针进行比较而不是比较字符串本身

*/