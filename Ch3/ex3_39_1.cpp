#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string s1 = "hello";
	string s2 = "helloworld";

	if(s1==s2)
		cout << "these two strings are the same" << endl;
	else
		cout << "they are different" << endl;


	return 0;
}

/*
string还可以用'<' '>'来进行比较，
*/