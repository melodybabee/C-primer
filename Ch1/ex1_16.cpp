#include <iostream>

int main()
{
	int i ;
	int sum = 0;
	while ( std :: cin >> i ){
		sum += i;
	}
	std :: cout << " the sum is " << sum << std::endl;
}

//如果不给sum一个初始值，sum的值为32766，约为2的16次幂
//文件结束符为 control + D