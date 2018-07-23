#include <iostream>

using std::endl;
using std::cout;

//范围for循环
int main()
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	using int_array = int[4];

	for(int_array &i :ia)//第一层遍历ia的外层数组，此处指行，每一行是含有4个整数的数组的引用，因此大小为4
		for (int q : i){//q来循环i所指的每一行的整数型的数
			cout << q <<endl;
	

//for循环下标运算
	for(size_t i = 0; i < 3; ++i)//第一层遍历ia的外层数组，此处指行，每一行是含有4个整数的数组的引用，因此大小为4
		for (size_t j = 0; j < 4 ;++j){//q来循环i所指的每一行的整数型的数
			cout << ia[i][j] <<endl;
		

//for 循环指针运算
	for(int_array *i = ia; i != ia + 3; ++i)//直接表示指向首地址
		for (int *j = *i; j != *i + 4 ;++j){//j指向i地址的值
			cout << *j <<endl;
		}
}
