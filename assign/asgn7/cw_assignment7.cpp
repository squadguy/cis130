#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "instructorFileProcessor.h"
using namespace std;

int main()
{

	Instructor_file_processor inst_maya("file_MayaTolappa.txt");
	Instructor_file_processor inst_amy("file_AmyChaaban.txt");
	Instructor_file_processor inst_tim("file_TimMoriarty.txt");

	inst_maya.print();
	inst_amy.print();
	inst_tim.print();

	return 0;

}