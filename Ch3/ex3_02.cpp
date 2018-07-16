#include <iostream>
#include <string>//string在标准库中
using std::getline;
using std::string;//string定义在命名空间中
using std::cin;
using std::cout;
using std::endl;

int main()//读取一行一行
{
	string line;
	while(getline(cin,line)){
		cout << " in the middle" << endl;
		cout << line << endl;
		}//如果不加上while的大括号，进入while循环之后只执行到第一个分号结束
	return 0;
}


/*int main()//读取单词
{
	string word;
	while(cin >> word){
		cout << word << endl;
		cout << "in the middle" <<endl;
		cout << word << endl;
	}
	return 0;
}*/



/*getline要首先用命名空间声明，注意都是小写
换行符指的是回车enter键，在getline方法中，cin输入流一旦遇到换行符（换行符也会被读入cin),之后将读入的内容存入line中（此时不写入换行符）
endl与\n都可以用来表示换行
std::cout << std::endl;  <=> std::cout << '\n' << std::flush;
endl有清空缓冲流的概念，对于有输出缓冲的流，如cout, clog,不手动刷新缓冲区，在缓冲区满的时候会自动刷新，建议用endl
对于无缓冲的流，如cerr, 刷新是不必要的，可以直接用\n
*/