#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a;
	int *p = new int[100000000];
	for(int i = 0; i < 100000000; i++){
		p[i] = i;
		cout << p[i];
	}
	cin >> a;
	delete[] p;
	cin >> a;
	return 0;
}
//动态内存测试
