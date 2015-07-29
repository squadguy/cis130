#ifndef INSTRUCTORFILEPROCESSOR_H
#define INSTRUCTORFILEPROCESSOR_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class Instructor_file_processor
{
private:
	string classes[10];
	string filename;
	string inst_name;
	int num_classes;
public:
	Instructor_file_processor (string _filename);
	void print();
};
#endif