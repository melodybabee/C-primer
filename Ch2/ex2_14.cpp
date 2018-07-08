#include <iostream>

int main()
{
	int i= 100, sum = 0;

	for (int i = 0; i != 10; ++i)
		sum += i;//for循环体结束，局部变量i的作用域结束

	std::cout << i << " " << sum << std::endl;
}


/*需要注意for循环如果没有括号，循环体为下方分号前第一句
i在循环体中被重新定义，for循环结束i的作用域便结束，所以i在输出的时候显示的是全局变量
而sum在循环中被执行相应的运算，一直使用的是全局变量，输出的是经过相加之后的值*/

 




































