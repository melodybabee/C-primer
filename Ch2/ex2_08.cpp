#include <iostream>

int main()
{
	std::cout << "\062\115\012" << std::endl;
	std::cout << "2M\n" << std::endl;//同上

	std::cout << "2\tM\n" << std::endl;
}

// \062 is 2
/* \115 is M 
* \012 is \n
* \t是横向制表符，会空出一段距离 */