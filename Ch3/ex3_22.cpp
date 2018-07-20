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
	string s;
	vector<string> str;

	while (getline(cin,s)){
		str.push_back(s);
		/*for (int i = 0; i < str.size();++i){
			cout << str[i] << endl;
		}*/
	}
	for(auto i = str.begin(); i != str.end() && !i->empty(); ++i){//循环vector
		for(auto &c : *i){//循环vector[i]中的整个string,c为字符串引用类型
		c = toupper(c);
			}
		cout << *i << endl;
		break;
	}
	
	return 0;
}
/*
需要注意的是，begin(),empty(),end()等方法的调用可以基于string,但不可以在char的时候调用，char不能调用方法
本题运行之后的结构是
1.在回车键之前，不论是否有空格，都是getline读取的一整行，存到vector[0]中
2.每按入一次回车键，会增加vector的一个长度

for循环会在到vector末尾或者为空的时候跳出，如果只想输出第一个string,需要cout后直接break
*/

