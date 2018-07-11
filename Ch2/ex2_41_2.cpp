#include <iostream>
#include <string>


struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
};

int main()
{
	Sales_data data1, data2;
	int i = 1;
	if(std::cin >> data1.bookNo >> data1.units_sold >> data1.price){
		

		while (std::cin >> data2.bookNo >> data2.units_sold >> data2.price){
			
			if(data1.bookNo == data2.bookNo){
				++i;
				
			}
			else{
				std::cout << i << std::endl;
				i = 1;
				data1.bookNo = data2.bookNo;
                data1.units_sold = data2.units_sold;
                data1.revenue = data2.revenue;
			}
		}
		std::cout << i << std::endl;
	}
	else{
		std::cerr << "your input has errors" <<std::endl;
		return -1;
	}

	return 0;

}
