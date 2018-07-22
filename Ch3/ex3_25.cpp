#include <iostream>
#include <iterator>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<unsigned> scores(11,0);
	unsigned grade;
	while (cin >> grade){
		if(grade <= 100)
			++scores[grade/10];
	}
	for (auto i = scores.begin(); i != scores.end();++i){
		cout << *i << endl;
	}
}

/*
scores.begin()就代表了vector的第一个位置
可以用auto score : scores来表示迭代器的循环
使用范围for语句减轻人为遍历的负担
*/
