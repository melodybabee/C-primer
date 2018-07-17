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
	for (int i = 0; i < s.size(); ++i){
		s[i] = 'X';
	}
	cout << s << endl;

	return 0;
}



/*
使用范围for语句来修改上述的程序
for (int i = 0; i < s.size(); ++i)这个语句可以写成for (auto& c : s)
s[i] = 'X';改为 c = 'X;'
auto自动判断c的类型，此处是char,c是引用s，利用赋值语句可以改变s的值

范围for语句(C++11引入）的格式
for ( for-range-declaration : expression（需要遍历的对象） ){
   statement   }
请注意 自动(auto) 关键字是在 for-range-declaration 中部分语句的首选。

*/