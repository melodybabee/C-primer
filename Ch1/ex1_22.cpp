#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item;
	Sales_item plus;
	while(std :: cin >> item){
		while(std::cin >> plus){
		if(item.isbn()==plus.isbn())
			item += plus;
		else{
			std::cout << item << std::endl;
			item = plus;
			}
		}
		std::cout << item << std::endl;
	}
	return 0;


}

//能够输入多个item并相加
//可以参考ex1_18的思路，输入数据，判断ISBN是否相同，相同的话相加，不同的话先输出，在将item值更新为新的
//最后将更新后的结构体输出
//为了提高友好性，可以把第一层while换成if,后加判断语句，如果输入的不是数字，可以做cerr判断该情况