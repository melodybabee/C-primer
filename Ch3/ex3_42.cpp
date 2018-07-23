#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	vector<int> vec(5,9);
	int arr[5];

	for(int *i = begin(arr);/*声明*/ i != end(arr);++i){
		*i = vec[i-begin(arr)];//取值
	}	

	for(auto i: arr)
		cout << i << endl;
}