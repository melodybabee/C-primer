#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::end;
using std::begin;
using std::vector;

int main(){

	vector<int> v1={1,2,3,4,5,6};
	vector<int> v2={1,2,3,4,6};

	if (v1 == v2)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;
	return 0;
}

/*
array不可以直接比较
vector可以直接比较
*/