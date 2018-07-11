#include <iostream>

struct Sales_data{
	std::string name = "";//需要写成std::string格式，string is an unknown type name,默认为空字符串，也可以赋值为""
	double price = 0.0;
	unsigned num = 0;//unsigned 和 int 同时出现的时候，int就会转为unsigned

};

//主要为了模仿一个data struct,下方代码写的不对，看后面的练习会写对的，错误的需要对比出看哪里有问题
Sales_data trans;

int main()
{
	trans.name = "sold";
	trans.price = 5.5;
	trans.num = 10;

	std::cout << trans << std:: endl;
}