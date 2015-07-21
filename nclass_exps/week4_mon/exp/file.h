#ifndef FILE_H
	#define FILE_H


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
	Student();

	Student(string _name, int _id);
	
	void setStu_name(string _stu_name);
	
	string getStu_name();

	void setStu_id(int _stu_id);

	int getStu_id();
	
	void print();
	
	void add_1000_to_id();
	
};

#endif