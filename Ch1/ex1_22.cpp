#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item;
	Sales_item plus;
	if(std :: cin >> item){
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
//使用文件重定向：每次输入同样的输入信息费时，可以直接把文件作为输入对象，再新建一个文件作为输出
/*执行 ./a.out <原文件名>新文件名
* ./a.out <books.txt>result.txt
*上面一句表示把books.txt中的语句作为输入，把打印结果作为输入写到result.txt文件中
*如果想要看result.txt中的结果，命令行执行 cat result.txt
*/