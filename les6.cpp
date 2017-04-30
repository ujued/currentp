#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	int age;
	string name;
};

int main()
{
	Student stu;
	stu.age = 18;
	stu.name = "小明";
	cout << stu.name + ":" << stu.age << endl;
	Student *p = new Student();
	cout << "栈区地址：" << &stu << "\n堆区地址：" << p <<endl; 
	return 0;
}
//类定义结束和结构体一样不能少了“;”
//动态申请的内存在内存地址底的堆区，随函数定义的变量在栈区，地址较高
