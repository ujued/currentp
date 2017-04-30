#include <iostream>
using namespace std;
int sum(int x, int a = 1, int y = 2, int z = 3);
double sum(double x = 1.0, double y = 2.8);
int sun(int x, int y);
int main()
{
	cout << sum() << endl;
	cout << sum(100) << endl;
	cout << sum(3, 6) << endl;
	cout << sum(10.7) << endl;
	return 0;
}
int sum(int x, int a, int y, int z)
{
	return x + a + y + z;
}
int sum(int x, int y)
{
	return x + y;
}
double sum(double x, double y)
{
	return x + y;
}
