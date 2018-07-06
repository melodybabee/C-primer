#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1;
	Sales_item item2;
	std :: cin >> item1;
	std :: cin >> item2;
	if(item1.isbn()==item2.isbn()){
		std :: cout << item1 + item2 << std :: endl;
		return 0;
	}
	else{
		std::cerr << " you should input the same ISBN number" << std :: endl;
		return -1;
	}
}

//cin中 有ISBN编号，册数，价格
//cout中 有ISBN编号，册数，总价，单价
//要判断输入的连个ISBN编号是否相同，不同的要提示，否则若不同，系统默认取第一个号码
//取结构体中的ISBN编号方法：item.isbn()
//在提示错误信息的时候，可以用std::cerr进行输入，return -1进行系统提示