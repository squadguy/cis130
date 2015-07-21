#include "file.h"
#include <iostream>
using namespace std;
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
