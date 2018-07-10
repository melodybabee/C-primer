#include <iostream>

int main()
{
	const int i = 42;
	auto j = i;//j is int, value = 42
	const auto &k = i;//k is the alias of i, const int&
	auto *p = &i;//p is a const int pointer, points to i
	const auto j2 = i, &k2 = i;//j2 is a const int, value is 42, k2 is a const int&, the alias of i


	std::cout << i << std::endl;//42
    std::cout << j << std::endl;//42
    std::cout << k << std::endl;//42
    std::cout << p << std::endl;//address
    std::cout << j2 << std::endl;//42
    std::cout << k2 << std::endl;//42


}