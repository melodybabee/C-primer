#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;


struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
};

int main()
{
	Sales_data data1, data2;
	if(cin >> data1.bookNo >> data1.units_sold >> data1.price){
		data1.revenue = data1.units_sold * data1.price;

		while (cin >> data2.bookNo >> data2.units_sold >> data2.price){
			data2.revenue = data2.units_sold * data2.price;

			if(data1.bookNo == data2.bookNo){
				data1.units_sold += data2.units_sold;
				data1.revenue += data2.revenue;
				
			}
			else{
				cout << data1.bookNo << "has" << data1.units_sold << "the total revenue is" << data1.revenue << endl;
				data1.bookNo = data2.bookNo;
                data1.units_sold = data2.units_sold;
                data1.revenue = data2.revenue;
			}
		}
		cout << data1.bookNo << "has" << data1.units_sold << "the total revenue is" << data1.revenue << endl;
	}
	else{
		cerr << "your input has errors" << endl;
		return -1;
	}

	return 0;

}
