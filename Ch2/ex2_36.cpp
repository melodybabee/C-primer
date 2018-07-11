#include <iostream>

int main()
{
	int a = 3, b = 4;//a is int, b is int
	decltype(a) c = a;//c is int
	decltype((b)) d = a;//d is int& 
	++c;
	std::cout << a << std::endl;//3
	++d;

	std::cout << a << std::endl;//4
	std::cout << b << std::endl;//4
	std::cout << c << std::endl;//4
	std::cout << d << std::endl;//4
}

// d is the alias of a, so if execute ++d, d will add 1, together with a;