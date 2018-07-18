#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int input;
	int size;
	vector<int> v1;
	while(cin >> input){
		v1.push_back(input);
	}

	//计算输出两个相邻的数字的加和
	//需要考虑vector为空和只有一个元素的情况

	if(v1.empty()){
		cout << "this vector is empty" << endl;
		return -1;
	}
	if(v1.size()==1){
		cout << "this vector only has one element" << endl;
		return -1;
	}
	for(int i = 1; i != v1.size(); ++i){
		int sum = v1[i-1] + v1[i];
		cout << sum << endl;
	}

	//计算第一个元素和最后一个元素加和
	if(v1.size()==1)
		cout << v1[0] << endl;

	if(v1.size()%2 == 0){
		size = v1.size()/2;
	}
	else{
		size = (v1.size()+1)/2;
	}
		
	for (int i= 0; i != size; ++i){
		int total = v1[i]+ v1[v1.size()-i-1];
		cout << total << endl;
	}
	
	return 0;

}

/*
if后不连着大括号，会只执行遇到的第一个分号前的语句
注意：
在一个vector中，尾部的序号如果跟着第一个的变化而变化，可以写成v1.size()-i-1
本题中需要讨论一下size为单数或者是双数的情况，在进入for循环之前重新定义
如果按照之前的思路，在size为单数的时候不能计算中间位置元素的值，size为双数的时候全面报错

用一个数%2 对2取余 来判断是奇数还是偶数
*/