#include <iostream>

int main()
{
	std :: cout << "please enter two numbers" << std::endl;
	int v1=0,v2=0;
	std :: cin >> v1 >> v2;
	/*
	*这是一行注释/*测试一下注释的嵌套*/
	*这是第二行注释
	*/
	std :: cout << "the sum of " << v1;
	std :: cout << "and " << v2;
	std :: cout << "is" << v1 + v2 << std::endl;
	return 0;
}

//编译器在读取/*后会找到第一个遇到的*/来将其中间的内容作为注释，在*/后方的代码会被当作源码，因此会报错