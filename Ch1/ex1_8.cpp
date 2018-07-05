#include <iostream>

int main()
{
	 std :: cout << "/*";//legel
	 std :: cout << "*/";//legel
	 //std :: cout << /* "*/" */;//illegel
     std :: cout << /* "*/" */";
	 std :: cout << /* "*/" /* "/*" */;

}