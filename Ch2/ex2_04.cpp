#include <iostream>

int main()
{
	unsigned u =10, u2 = 42;
	std::cout << u2 - u << std ::endl;
	std::cout << u - u2 << std ::endl;//4294967296-32=4294967264

	int i = 10, i2 = 42;
	std::cout << i2 - i << std ::endl;
	std::cout << i - i2 << std ::endl;
	std::cout << i - u << std ::endl;
	std::cout << u - i << std ::endl;	
}

//unsigned number 是大于和等于0的数字
//当unsigned 遇到负数后，会用4294967296减去这个负数的绝对值
