#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;
//replace MAX_STU with 24
#define MAX_STU 24

int main()
{

	string fname, cmpl_name;

	cout << "Enter name: ";
	cin >> fname;

	cout << "fname = " << fname << endl;

	cin.ignore(10, '\n');
	cout << "Enter fname space lname : ";
	getline(cin, cmpl_name);

	cout << "complete name = " << cmpl_name << endl;
	return 0;
}

int main5()
{
	int int1 = 123;
	float float1 =1.2345f, float2 =12.34567f, float3 = 12345678.56f,
		float4 = 123;

	printf("Hello\n"); 
	printf("int1 contains %i\n", int1);
	printf("float1 contains %10.2f\n", float1);
	printf("float3: %15.1f\nfloat4:%15.1f\n", float3, float4);


	return 0;
}

int main4()
{

	int int1 = 123;
	float float1 =1.2345f, float2 =12.34567f, float3 = 12345678.56f,
		float4 = 123;

	
	cout << std::fixed << setprecision(2);//prevents numbers from compiling into scientific notatation
	//setpercision instructs how many decimal places to use and rounds properly.

	cout << "123456789012345678901234567890\n";
	cout << setw(15) << int1 << endl; //couts 15 character wide

	cout << int1 << endl;

	//properly align output in console
	cout << left << setw(15) << "float1= " << setw(15) << right << float1 << endl;
	cout << left << setw(15) << "float2= " << setw(15) << right << float2 << endl;
	cout << left << setw(15) << "float3= " << setw(15) << right << float3 << endl;
	cout << left << setw(15) << "float4= " << setw(15) << right << float4 << endl;

	return 0;
}


int main3()
{

	int num1, num2, num3, num4;
	//want to set all nums to 0

	num1=num2=num3=num4=0;

	return 0;
}


int main0()
{

	int num1 = 12;
	num1 = num1 + 1;

	num1 += 1;

	++num1;
	num1++;

	num1+=2; // must use to add two

	cout << num1 << endl;

	return 0;
}


int main2()
{

	const int CURR_YEAR = 2015; //initialization statement of a CONSTANT
	int num1 = 10; //initialization statement

	//CURR_YEAR = 2016; creates an error trying to assign a new val to a const.

	cout << MAX_STU << endl;

	num1=12; //assignment statement
	return 0;
}