#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int input;
	int size;
	vector<int> v1;
	while(cin >> input){
		v1.push_back(input);
	}

	//计算输出两个相邻的数字的加和

	if(v1.size() == 0){
		cout << "this vector is empty" << endl;
		return -1;
	}
	if(v1.size() ==1){
		cout << "this vector only has one element" << endl;
		return -1;
	}
	for(auto beg = v1.begin(); beg + 1 != v1.end(); ++beg){
		int sum = *beg + *(beg+1);
		cout << sum << endl;
	}

	//计算第一个元素和最后一个元素加和
	if(v1.size()==1)
		cout << v1[0] << endl;

	if(v1.size()%2 == 0){
		size = v1.size()/2;
	}
	else{
		size = (v1.size()+1)/2;
	}
		
	for (auto beg = v1.begin(),end = v1.end()-1; beg <= end ; ++beg,--end){
		int total = *beg+ *end;
		cout << total << endl;
	}
	
	return 0;

}

/*
注意区分v1.begin(),v1.end()与auto beg = v1.begin(),end = v1.end()-1;
前者是通过vector和string就可以调用的方法，默认存在
后者是声明的迭代器,可以移动操作
如果声明两个迭代器，只需要声明一次auto
*/

