#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1;
	cout << v1.size() << endl;

	vector<int> v2(10);
	cout << v2.size() << endl;
	for(auto i = v2.begin(); i != v2.end(); ++i){
		cout << *i << endl;
	}

	vector<int> v3(10,42);
	cout << v3.size() << endl;
	for(auto i = v3.begin(); i != v3.end(); ++i){
		cout << *i << endl;
	}

	vector<int> v4{10};
	cout << v4.size() << endl;
	for(auto i = v4.begin(); i != v4.end(); ++i){
		cout << *i << endl;
	}

	vector<int> v5{10,42};
	cout << v5.size() << endl;
	for(auto i = v5.begin(); i != v5.end(); ++i){
		cout << *i << endl;
	}

	vector<string> v6{10};
	cout << v6.size() << endl;
	for(auto i = v6.begin(); i != v6.end(); ++i){
		cout << *i << endl;
	}

	vector<string> v7{10,"hi"};
	cout << v7.size() << endl;
	for(auto i = v7.begin(); i != v7.end(); ++i){
		cout << *i << endl;
	}
	return 0;
}