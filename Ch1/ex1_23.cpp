#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1;
	Sales_item item2;
	while(std::cin >> item1){
		int num = 1;
		while (std::cin >> item2){
			if(item1.isbn()==item2.isbn()){
				num++;
				item1 = item2;
			}
			else{
				std :: cout << "the num of "<< item1.isbn() <<" is: "<< num << std:: endl;
				item1 = item2;
				num = 1;
			}
		}
		std :: cout << "the num of "<< item1.isbn() << " is: "<< num << std:: endl;
	}
}
//cin中 有ISBN编号，册数，价格
//cout中 有ISBN编号，册数，总价，单价