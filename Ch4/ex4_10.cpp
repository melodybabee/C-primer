#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){
	int a;
	
	while(cin >> a){
		if(a == 42) break;
		cout << a << endl;
	}

	return 0;
}