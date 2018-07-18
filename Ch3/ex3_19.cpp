#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	//method 1
	vector<int> v1(10,42);

	//method 2
	//vector<int> v2(10);//不能用这个，因为会声明为一个大小为10的空vector, push_back会加在10个空数值之后
	vector<int> v2;
	for(int i = 0; i < 10; ++i){
		v2.push_back(42);
	}
	cout << v2.size();

	//method 3
	vector<int> v3 = {42,42,42,42,42,42,42,42,42,42};

}

/*
vector大小的声明不用等号！！
*/