#include <iostream>

int main()
{
	std :: cout << "please enter two numbers" << std::endl;
	int v1=0,v2=0;
	std :: cin >> v1 >> v2;
	std :: cout << "the sum of " << v1;
	std :: cout << "and " << v2;
	std :: cout << "is" << v1 + v2 << std::endl;
	return 0;
}

//int v1, v2;不行 int v1 = 0, v2 = 0; 可以
//std :: cout << "the sum of " << v1;
//            << "and " << v2;
//            << "is" << v1 + v2 << std::endl;
//上面的写法不可以，在每行<<之前都需要先声明std :: cout,或者去掉每行之前的空格