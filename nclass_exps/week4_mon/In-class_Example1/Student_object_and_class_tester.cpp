#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
class Student
{
private:
	string stu_name;// = "";
	int stu_id;// = 0;

public:
	Student()
	{
		stu_name = "-";
		stu_id = 0;
	}
	Student(string _name, int _id)
	{
		stu_name = "-";
		stu_id = 0;
		setStu_name(_name);
		setStu_id(_id);
	}
	void setStu_name(string _stu_name)
	{
		if (_stu_name.length() == 0)
			cout << "name can't be blank\n";
		else
			stu_name = _stu_name;
	}
	string getStu_name()
	{
		return stu_name;
	}
	void setStu_id(int _stu_id)
	{
		if (_stu_id < 1)
			cout << "id can't be < 1\n";
		else
			stu_id = _stu_id;
	}
	int getStu_id()
	{
		return stu_id;
	}
	void print()
	{
		printf("Name=%s, Id=%i\n", stu_name.c_str(),
			stu_id);
	}
	void add_1000_to_id()
	{
		stu_id += 1000;
	}
};
int main()
{
	Student mystu1, mystu2("", -123);
	mystu1.print();
	mystu1.add_1000_to_id();
	mystu1.print();
	cout << "mystu1's name is set to "
		<< mystu1.getStu_name() << endl;
	return 0;
}