#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::end;
using std::begin;

int main(){

	int a1[] = {1,2,3,4,5,6};
	int a2[] = {1,2,3,4,6};

	int *pb = begin(a1);
	int *pe = end(a1);
	int *qb = begin(a2);
	int *qe = end(a2);

	if((pe-pb) != (qe-qb)){
		cout << "they have different sizes" << endl;
		return 0;
	}
	for(int *i = pb, *j = qb; i!= pe && j!= qe; ++i,++j){
		if( *i != *j){
			cout << "they are different arrays" <<endl;
			return 0;
		}
	}

	cout << "they are the same" << endl;

	return 0;
}

/*
begin(array) and end(array)是一个固定位置的指针，可以在创建i,j去进行循环操作
*/