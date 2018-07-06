#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item;
	while(std :: cin >> item){
	std :: cout << item << std :: endl;
	}
}

//如果想输入一组数据，应该加上while循环，一旦有输入就执行循环体内的语句
//引入了Sales_item.h头文件，内包括的结构体不明白
//cin中 有ISBN编号，册数，价格
//cout中 有ISBN编号，册数，总价，单价