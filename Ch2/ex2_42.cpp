#include <iostream>
#include "Sales_data.h"//引用Sales_data.h


int main()
{
	Sales_data data1, data2;
	if(std::cin >> data1.bookNo >> data1.units_sold >> data1.price){
		data1.revenue = data1.units_sold * data1.price;

		while (std::cin >> data2.bookNo >> data2.units_sold >> data2.price){
			data2.revenue = data2.units_sold * data2.price;

			if(data1.bookNo == data2.bookNo){
				data1.units_sold += data2.units_sold;
				data1.revenue += data2.revenue;
				
			}
			else{
				std::cout << data1.bookNo << "has" << data1.units_sold << "the total revenue is" << data1.revenue << std::endl;
				data1.bookNo = data2.bookNo;
                data1.units_sold = data2.units_sold;
                data1.revenue = data2.revenue;
			}
		}
		std::cout << data1.bookNo << "has" << data1.units_sold << "the total revenue is" << data1.revenue << std::endl;
	}
	else{
		std::cerr << "your input has errors" <<std::endl;
		return -1;
	}

	return 0;

}