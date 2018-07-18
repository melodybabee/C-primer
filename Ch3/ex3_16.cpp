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
	vector<int> v1;
	cout << v1.size() << endl;

	vector<int> v2(10);
	cout << v2.size() << endl;
	for(int i = 0; i < v2.size(); ++i){
		cout << v2[i] << endl;
	}

	vector<int> v3(10,42);
	cout << v3.size() << endl;
	for(int i = 0; i < v3.size(); ++i){
		cout << v3[i] << endl;
	}

	vector<int> v4{10};
	cout << v4.size() << endl;
	for(int i = 0; i < v4.size(); ++i){
		cout << v4[i] << endl;
	}

	vector<int> v5{10,42};
	cout << v5.size() << endl;
	for(int i = 0; i < v5.size(); ++i){
		cout << v5[i] << endl;
	}

	vector<string> v6{10};
	cout << v6.size() << endl;
	for(int i = 0; i < v6.size(); ++i){
		cout << v6[i] << endl;
	}

	vector<string> v7{10,"hi"};
	cout << v7.size() << endl;
	for(int i = 0; i < v7.size(); ++i){
		cout << v7[i] << endl;
	}
	return 0;
}


/*
vector<int> v4{10};这种写法在C++11中新引入，编译器不支持，因此编译的时候需要加上g++ -std=c++11 ex3_16.cpp
output is:
0
10
0
0
0
0
0
0
0
0
0
0
10
42
42
42
42
42
42
42
42
42
42
1
10
2
10
42
10










10
hi
hi
hi
hi
hi
hi
hi
hi
hi
hi
*/