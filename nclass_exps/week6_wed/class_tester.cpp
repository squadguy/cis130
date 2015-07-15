#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include "student.h"

int main()
{
	Student *stu_ptrn;
	cout << "sizeof(Student)= " << sizeof(Student)<< endl;
	cout << "sizeof(Student*)= " << sizeof(Student*) << endl;

	stu_ptrn = new Student;
	return 0;
}

int main3()
{
	unsigned size;
	int *myarray;

	cout << "Enter array size: " << endl;
	cin >> size;

	myarray = new int[size];
	for (int i=0; i < size; i++)
		myarray[i] = rand() % 34; 


	delete [] myarray;

	return 0;
}

int main2()
{
	Student stu1;
	Student *stu1_ptr = &stu1;

	cout << "stu1_ptr= " << stu1_ptr << endl;
	//cout << (*stu1_ptr).print() << endl; Couldn't get it to work
	//cout << stu1_ptr -> print() << endl; Couldn't get it to work

	return 0;
}

int main1()
{
	Student stu1("Maya", 1234);
	stu1.print();
	stu1.add1000();
	stu1.print();
	return 0;
}