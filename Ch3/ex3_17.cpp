#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> v1;
	string str;
	while(cin >> str){
		v1.push_back(str);

		for(auto &s :v1){//s的类型是string的引用
			for (auto &c : s){//c的类型是char的引用
			c = toupper(c);
			}
		}

	}

	for (int i = 0; i < v1.size(); ++i){
			cout << v1[i] << endl;
		}

	return 0;
}

/*
遇到的问题：每次更新完之后都会push_back一次，因此会存下逐个改为大写的过程
解决办法：先push_back,再逐一修改，将vector分解为string,再将string分解为char
*/