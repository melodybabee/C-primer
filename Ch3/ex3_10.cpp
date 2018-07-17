#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	string ret;
	int i = 0;
	cout << "please input a string with punctuation:" << endl;
	cin >> s;
	for (; i < s.size(); ++i ){
		if(!ispunct(s[i])){
				ret += s[i];
		}
		else{
			i++;
		}
	}
	cout << ret << endl;

	return 0;
}
//缺点在于只能筛选出标点符号，如果是空格的话，将从空格处中断



/*
代码优化
string s;
cout<< "please input a string with punc" << endl;
while(getline(cin,s)){
	for(auto c:s){
		if(!ispunc(c))
		cout << c;//不是符号的字符就会被输出到s中
	}
	cout << s;
}
*/