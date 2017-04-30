#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *p = new char[100];
	strcpy(p, "hello,world!");
	cout << p << endl;
	delete[] p;
	return 0;
}
//作业，在堆中申请100个字符型内存，拷贝hello，world存入，最后释放
