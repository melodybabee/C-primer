#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;

int main()
{
	int num;
	vector<int> vec(10,1);


	for (auto i = vec.begin(); i != vec.end(); ++i){
		*i = *i *2;
		cout << *i << endl;
	}

	return 0;

}

//不可用!i->empty();因为执行这个命令等同于(*i) = empty();会使i取值，i的值此时为int类型，因此不能执行方法
//上一题中i的值是一个string