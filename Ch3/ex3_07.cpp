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
	for (char &c : s ){
		c = 'X';
	}
	cout << s << endl;

	return 0;
}


/*
将上一题中的auto改为char不会有变化，auto本身已经自动声明为char
*/
