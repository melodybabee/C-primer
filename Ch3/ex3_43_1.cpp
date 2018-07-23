#include <iostream>

using std::endl;
using std::cout;

int main()
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	for(int (&i)[4] :ia)//第一层遍历ia的外层数组，此处指行，每一行是含有4个整数的数组的引用，因此大小为4
		for (int q : i){//q来循环i所指的每一行的整数型的数
			cout << q <<endl;
		}
}