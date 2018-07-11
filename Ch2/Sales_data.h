#include <string>

//有关结构体的部分，在ex2_42中需要用到的Sales_data结构定义在此文件中

struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
};




/* 书中给的标准文件，
#ifndef SALES_DATA_H//当且仅当变量已定义的时候为真，会继续执行下一句，直到endif
#define SALES_DATA_H//将sales_data作为预处理

#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};
#endif//检查停止
*/
