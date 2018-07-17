#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	cin >> s;
	//int i = 0;
	decltype(s.size()) i = 0;
	while(i < s.size()){
		s[i] = 'X';
		++i;
	}
	cout << s << endl;

	return 0;
}


/*
需要注意的是，int i = 0;的写法是错误的
因为i 和 s.size()是同一个类型的数据，是string::size_type类型，不是int型
*/
