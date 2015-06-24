#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	cout << " Max int =" << INT_MAX << endl
	<< "min int = " << INT_MIN << endl 
	<< "Short max =" << SHRT_MAX << endl
	<< "Short min =" << SHRT_MIN << endl;
	return 0;
}

int main4()
{

	short short1;

	short1 = int(pow(2, 15)) - 1;


	cout << "short1= "<< short1 << endl;
	
	short1=short1 + 1;
	cout << sizeof(short) << endl;

	return 0;

}



int main3()
{

	int num1 = 11, num2 = 12, num3 = 11;
	float avg_num;

	avg_num = (num1 + num2 + num3)/3.0;

	cout << avg_num << endl; //1
	return 0;

}

int main2()
{

	int _2_pow_5;
	_2_pow_5 = pow(2, 5); //pow() is function defined in cmath
	cout << _2_pow_5 << endl;
	cin.get();
	return 0;

}



int main1()
{

	int int1;
	char char1;
	float float1;

	cout << "int1: ";
	cin >> int1;

	cout << "char 1: ";
	cin >> char1;

	cout << "float1: ";
	cin >> float1;

	cout << int1 << " "	<< char1 << " " << float1 << endl;

	return 0;
}
