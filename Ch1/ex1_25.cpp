#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1;
	Sales_item item2;
	if(std::cin >> item1){
		while(std::cin >> item2){
			if(item1.isbn()==item2.isbn()){
				item1 += item2;
			}
			else{
				std::cout << item1 << std::endl;
				item1 = item2;
			}
		}
		std::cout << item1 << std ::endl;

	}
	else{
		std::cout << "please input the valid type" << std::endl;
		return -1;
	}
}




/*在引入非标准库头文件的时候注意文件格式是XX.h
*/