#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec;
	int i;
	while(cin >> i){
		vec.push_back(i);
	}
	//cout << vec << endl;
	return 0;
}

/*
vector执行方法用vector.push_back();//.的操作
对vector不能直接进行cout操作
*/