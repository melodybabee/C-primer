#include <iostream>

int main()
{	
	int i;
	int n;
	int count = 1;
	while (std::cin >> i){//判断第一行存在，后面不再走这一行，一旦第二个数字不符合要求，走最后一个输出流后退出程序
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
//在cin中，enter空格键的作用是将cin的输入内容送入到缓冲区中，此时敲入的空格键也会被认为是一个字符
//首先输入第一个数，进入第一层while循环中；
//接着输入第二个数，进入第二层循环；
//一旦第二个数不满足条件或者结束整个程序，会执行第21行的语句，最后退出整个程序