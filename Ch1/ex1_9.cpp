#include <iostream>

int main(){
	int i = 50;
	int sum = 0;
	while (i <= 100){
		sum += i;
		++i;
	}
	std::cout<< "the sum from 50 to 100 is " << sum << std :: endl;

	return 0;
}

//复习++i 和 i++ 如果不赋值的话没有区别

