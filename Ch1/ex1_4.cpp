#include <iostream>

int main()
{
	std :: cout << "please enter two numbers" << std::endl;
	int a;
	int b;
	std :: cout << "The first number is" << std::endl;
	std :: cin >> a;
	std :: cout << "The second number is" << std::endl;
	std :: cin >> b;
	std :: cout << "the product of these two number is "<< a*b << std :: endl;
	return 0;
}

//std::endl 有换行的作用（即结束当前行，并将buffer里面所有的内容输出）