#include "file.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

	Student::Student()
	{
		stu_name = "-";
		stu_id = 0;
	}
	Student::Student(string _name, int _id)
	{
		stu_name = "-";
		stu_id = 0;
		setStu_name(_name);
		setStu_id(_id);
	}
	void Student::setStu_name(string _stu_name)
	{
		if (_stu_name.length() == 0)
			cout << "name can't be blank\n";
		else
			stu_name = _stu_name;
	}
	string Student::getStu_name()
	{
		return stu_name;
	}
	void Student::setStu_id(int _stu_id)
	{
		if (_stu_id < 1)
			cout << "id can't be < 1\n";
		else
			stu_id = _stu_id;
	}
	int Student::getStu_id()
	{
		return stu_id;
	}
	void Student::print()
	{
		printf("Name=%s, Id=%i\n", stu_name.c_str(),
			stu_id);
	}
	void Student::add_1000_to_id()
	{
		stu_id += 1000;
	}
