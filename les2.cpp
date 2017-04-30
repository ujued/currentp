#include <iostream>
using namespace std;
int main()
{
	int const count = 10;
	int const *p = &count;
	int const cou = 3;
	int x = 101;
	int const &y = x;
	int const &z = count;
	x = 102;
	p = &cou;
	for(int i = 0; i < *p; i++){
		cout << "hello, imooc" << endl;
	}
	return 0;
}
//const型变量（常量）需要指向常量的指针来指向, 对其引用也要用常量引用
//int const *p（指向常量的指针）
//int * const p（常量指针，指针值不变，即所指地址不能变）
//int const &y = a（常量引用，不能通过y修改a的值）
