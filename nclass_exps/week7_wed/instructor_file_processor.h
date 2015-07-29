#ifndef SNOWDATA_H
#define SNOWDATA_H
#include <iostream>
#include <string>
using namespace std;

class Instructor_file_processor
{

private:
	string classes[10];
	string filename;
	string inst_name;
	int num_classes;

public:
	instructor_file_processor(string);
	void print();

};
#endif