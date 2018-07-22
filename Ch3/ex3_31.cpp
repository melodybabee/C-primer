#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int array[10];
	for (int i =0; i < 10; ++i){
		array[i] = i;
	}
	for(auto i : array){
		cout << i << endl;
	}

	return 0;
}


/*
auto i :array中，i是类型是array[0],array[1]......因此array[i] = i;的写法是错误的
除此之外，数据下标的类型是size_t,需要引入的头文件，#include <cstddef>，声明不引入int型，应该为size_t i，但是声明为int也可以运行（为什么？？）
size_t是unsigned类型
计算机组成原理：int小于等于数据线宽度，size_t大于等于地址线宽度。size_t存在的最大原因可能是因为地址线宽度历史中经常都是大于数据线宽度的。
*/