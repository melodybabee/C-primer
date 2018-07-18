#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> vec;
	string str;
	while(cin >> str){
		vec.push_back(str);
	}
	cout << vec[0] << endl;//只有规定好输出vec的那个元素才能输出
	return 0;
}