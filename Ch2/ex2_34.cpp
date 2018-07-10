#include <iostream>

int main()
{
	int i = 0, &r = i;
    auto a = r;
     
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    std::cout << a << std::endl;//0
    std::cout << b << std::endl;//0
    std::cout << c << std::endl;//0
    std::cout << d << std::endl;//address
    std::cout << e << std::endl;//address
    std::cout << g << std::endl;//0

    a = 42;
    b = 42;
    c = 42;
    *d = 42;
    e = &c;

    std::cout << a << std::endl;//42
    std::cout << b << std::endl;//42
    std::cout << c << std::endl;//42
    std::cout << d << std::endl;//address
    std::cout << e << std::endl;//new address
    std::cout << g << std::endl;//0

    return 0;


}


/* a is a int 
* b is int, the top-level const in ci is dropped
*c is int 
*d is a pointer points to int, int*
*e is a pointer ,points to const int ,which is a low-level int. const int*
*g is a alias of ci
*/

