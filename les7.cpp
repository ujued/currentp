#include <iostream>
using namespace std;
class Student
{
public:
	Student(int _a, int _b,int _c){
		a = _a;
		b = _b;
		cout << "Construct" << a << endl;
	}
	Student(const Student &stu){
		a = stu.a;
		b = stu.b;
		cout << "拷贝构造函数" << endl;
	}
	int getA(){
		return a;
	}
	int getB(){
		return b;
	}
	~Student(){
		cout << "析构" << a << endl;
	}
private:
	int a;
	int b;
};
int main()
{
	Student s(1,2,3);
	Student s1 = s;
	Student s2 = s;
	cout << s.getA() << ":" << s.getB() << endl;
	cout << s1.getA() << ":" << s1.getB() << endl;
	cout << s2.getA() << ":" << s2.getB() << endl;
	return 0;
}
