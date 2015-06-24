#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	srand(time(NULL));
	int num1, num2, num3;

	num1 = rand() % 101;
	num2 = rand() % 101;
	//generate a number between 10-20.. (0-10)+10
	num3 = rand() % 11 + 10;  

	cout << "num 1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	return 0;
}

int main2()
{

	const int TEXT_MAX_SIZE = 15;
	char myname[TEXT_MAX_SIZE]; //must use const, not variable for array.

	return 0;
}