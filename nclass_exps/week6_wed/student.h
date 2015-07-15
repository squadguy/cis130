#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string stuName;
	int stuId;
public:
	Student(string = "--", int = 1);
	void add1000();
	void print();
};

#endif