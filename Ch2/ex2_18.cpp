#include <iostream>

int main()
{
	int i = 1;
	int n = 2;
	int *p = &i;
	std::cout << *p << std::endl;//p points ti i
	std::cout << p << std::endl;//output is the address:0x7ffee9c43b1c
	p = &n;
	std::cout << *p << std::endl;//change where p points to, now p points to n 

	*p = 5;
	std::cout << *p << std::endl;//change the value of p, now p is still points to n, but the value has been changed


}