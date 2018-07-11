#include <iostream>
using std::cin;
using std:: cout;
using std::endl;

int main()
{
	cout << "please input two numbers" << endl;
	int a;
	int b;
	cin >> a;
	cin >> b;

	if	(a > b){//此部分进行数字大小的交换,i为中间变量，先用其中一个变量（a)给中间变量赋值，原有的两个变量交换，再将中间变量的值赋给另一个变量（b)
	int i = a;
	a = b;
	b = i;

	}

	while (a <= b ){
		cout << a;
		++a; 
	}

	return 0;
}