#include <iostream>
#include <vector>

using std :: vector;
using std :: cout;
using std :: endl;

int main(){
	vector<int> ret{1,2,3,4,5,6,7,8,9};
	for(auto &i : ret)
		i = (i%2) ? (i*2) :i ;//(i%2)的结果是0或1，是1的话（真），i = i*2, 如果是0，仍为i
	for(auto i : ret)
		cout << i << " " << endl;
}