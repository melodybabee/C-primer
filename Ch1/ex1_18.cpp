#include <iostream>

int main()
{	
	int i;
	int n;
	int count = 1;
	while (std::cin >> i){
		std :: cout << "sun";
		while (std :: cin >> n){
			if (n == i){
				count++;
			}
			else{
				std :: cout << "the" << i << "has" << count << "times" << std :: endl;
				i = n;				
				count = 1;
			}
			std :: cout << "test";
		}
		std :: cout << "the" << i << "has" << count << "times" << std :: endl;
	}
	return 0;
}

//最后	一行的作用是打出输入的最后一个数，否则有不同的数字的时候会进入else循环，打出倒数第二位不同的数，最后一位数字无法打出
//在最外侧循环中，if和while的作用是一样的