#include <iostream>

int main()
{
	std :: cout << "please input two numbers" << std::endl;
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;

	if	(a > b){//此部分进行数字大小的交换,i为中间变量，先用其中一个变量（a)给中间变量赋值，原有的两个变量交换，再将中间变量的值赋给另一个变量（b)
	a = b;
	b = i;
	}

	while (a <= b ){
		std ::cout << a;
		++a; 
	}

	return 0;
}

//注意考虑输入数字大小的问题