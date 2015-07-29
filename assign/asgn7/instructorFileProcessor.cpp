#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "instructorFileProcessor.h"
using namespace std;

Instructor_file_processor::Instructor_file_processor(string _filename)
	{
		//set filename private variable
		filename = _filename;

		ifstream ifile(_filename.c_str());

		ifile >> inst_name;

		num_classes = 0;
		while (ifile>>classes[num_classes])
			num_classes++;

		ifile.close();
	};

void Instructor_file_processor::print()
{
	cout << inst_name;

};