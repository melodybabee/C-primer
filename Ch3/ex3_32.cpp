#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> vec(10);

	for (int i =0; i < 10; ++i){
		vec[i] = i;
	}
	for(auto i : vec){
		cout << i << endl;
	}

	return 0;
}

/*
array的拷贝不能直接复制，需要这样写：
int ia[10];
for (size_t i = 0; i < 10; ++i) ia[i] = i;

int ia2[10];
for (size_t i = 0; i < 10; ++i) ia2[i] = ia[i];
*/