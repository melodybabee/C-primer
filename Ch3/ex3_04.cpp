#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;

	if(s1 == s2){
		cout << "these two strings are the same" << endl;
	}
	else{
		if(s1 > s2){
			cout << s1 << endl;
		}
		else{
			cout << s2 << endl;
		}
	}

	if(s1.size() == s2.size()){
		cout << "these two strings have the same length" << endl;
	}
	else{
		if(s1.size() == s2.size()){
			cout << s1 << endl;
		}
		else{
			cout << s2 << endl;
		}
	}

	return 0;
}


/*
cin语句的结尾不能加endl, 加上之后会报错, cin >> endl is a mistake, endl is only for outputting.
比较大的那个，可以写作：cout << "The larger string is " << ((str1 > str2) ? str1 : str2);由此减少了一次if...else...语句
注意对于string来说，大小为string.size()
*/