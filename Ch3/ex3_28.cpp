#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

string sa[10];
int ia[10];
int main()
{
	string sa2[10];
	int ia2[10];


	cout << sa[10] << endl;
	cout << ia[10] << endl;
	cout << sa2[10] << endl;
	cout << ia2[10] << endl;
}

/*
涉及Default Initialization,默认初始化的知识
1.如果在定义变量的时候没有指定初值，则变量会被默认初始化
2.内置类型的变量未被显式初始化，它的值由定义的位置决定
  外置类型的变量未被显式初始化，初始值是0；
3.一个没有被初始化的内置类型变量的值是未定义的，如果试图拷贝或者以其他形式访问，将会发生错误。

本题中：
1.std::string是外置类型，默认初始化为0
2.int型是内置类型，ia不在函数内，因此是0。ia2在函数内，值是未定义的。
*/