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



/*goal: 读取多个具有相同信息的对象，并输出他们的和
注意结构体不能直接赋值，如果想用一个的值替换另一个，需要逐个替换
思路同ex1_22.cpp
*/







