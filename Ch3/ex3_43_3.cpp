#include <iostream>

using std::endl;
using std::cout;

int main()
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	for(int (*i)[4] = ia; i != ia + 3; ++i)//直接表示指向首地址
		for (int *j = *i; j != *i + 4 ;++j){//j指向i地址的值
			cout << *j <<endl;
		}
}

/*
注意用到指针的时候时候，for循环中的判断条件，相加要在原指针位置的基础之上
*/