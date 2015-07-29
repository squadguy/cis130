#include <iostream>
using namespace std;

int main()
{

	int num = 5;
	int *ptr;
	ptr = &num;
	
	cout << "The value of num = " << num << endl;
	cout << "The memory addres of num (&num) = " << &num << endl;
	cout << "the value of * ptr = " << *ptr << endl;
	cout << "ptr = " << ptr << endl;
	
	return 0;
}
