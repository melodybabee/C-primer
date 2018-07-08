#include <iostream>
using namespace std;

/*std::string global_str; //初始值是null string
int global_int; // global_int = 0
std::cout << global_int << std:: endl;//0
std::cout << global_string << std:: endl;*/ //NULL

int main()
{
	int local_int;
	std::string local_string;
	std::cout << local_int << std:: endl;//32766，undefined value
	std::cout << local_string << std:: endl;//NULL

}


/*全局变量如果没有赋予初始值的话，将默认为空，如空值或者空字符串
in a function body, 内置类型变量将不被初始化，所以会产生undefined值
但是在一些class中，如local_string，它已经被它的class赋值，因此为空字符串
*/
