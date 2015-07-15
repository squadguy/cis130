#include "student.h"


Student::Student(string _name, int _id)
{
	stuName = _name;
	stuId = _id;
}

void Student::print()
{
	cout << "Name : " << stuName << ", ID : " << stuId << endl;
}

void Student::add1000()
{
	stuId += 1000;
}
