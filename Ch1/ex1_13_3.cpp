#include <iostream>

int main()
{
	std :: cout << "please input two numbers" << std::endl;
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;

	if	(a > b){//此部分进行数字大小的交换,i为中间变量，先用其中一个变量（a)给中间变量赋值，原有的两个变量交换，再将中间变量的值赋给另一个变量（b)
	int i = a;
	a = b;
	b = i;
	}

	for (; a <= b ; ++a){//没有init-statement,无论什么情况都会进入到这个循环中
		std ::cout << a << std::endl;
	}

	return 0;
}