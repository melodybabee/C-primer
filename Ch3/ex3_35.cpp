#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::end;

int main()
{
	int array[]={5,5,5,5,5,5};
	int *e = end(array);

	for(auto i : array)
	cout << i << endl;

	for (int *p = array; p!= e; ++p)
	*p = 0;

	for(auto i : array)
	cout << i << endl;//i此时是int型
}

/*
声明数组的时候要写[]和=
*/