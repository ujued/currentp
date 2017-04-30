//新分支dev
#include <iostream>
using namespace std;
int main()
{
	int x = 10;
	int &y = x;
	int *p = &y;
	cout << x << "\n" << y << "\n" << p <<endl;
	cout << "x: " << &x << "\ny: "<< &y << "\np: " << &p  <<endl;
	return 0;
}
//引用是一个一个变量的别名，&y = x 那么x、y等价而已，*p === &x === &y 
