#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1;
	string s;
	while(cin >> s1){
		s += s1 + " ";
	}
	cout << s << endl;

	return 0;

}

/*
s += s1 + " "; 的意思是s = s + s1 + " ";
*/