//A project which tells info about me

#include <iostream>
#include <string>

using namespace std;

int main()
{

	//first part of chapter 3
	int num1, num2, total;

	cout << "Enter value for num1 : ";
	cin >> num1;
	cout << "Enter value for num2 : ";
	cin >> num2;
	
	total = num1 + num2;

	cout << "total = " << total << endl;

	return 0;
}

int main8()
{

	int total_min = 215, hours, rem_min;

	hours = total_min/60;
	rem_min = total_min%60;

	cout << "total minutes = " << total_min
		<< ".  This is " << hours << " hour(s) and " 
		<< rem_min << " minutes(s) \n";

	return 0;
	
}

int main7()
{
	float avg_score;
	float avg_score2;
	float num2;
	num2 = 0;
	avg_score2 = 123.15f/num2;
	avg_score = 123.15f/0.0f;

	cout << avg_score << endl;
 	cout << avg_score2 <<endl;

	return 0;
}

int main2()
{

	int int1 = 25;
	bool is_it_valid = false;
	string myname = "Christopher";
	float float1 = 123.546;

	cout << "int: " << sizeof(int1) << " bytes\n" <<
		"bool: " << sizeof(bool) << " bytes\n" <<
		"string: " << sizeof(myname) << " bytes\n" << 
		"float: " << sizeof(float1) << " bytes\n" << endl;

	return 0;
}

int main1()
{

	//declaring variables
	int course_load;
	int current_year;
	bool is_all_ok;
	string myName;
	char middle_intl;

	//assign values to variables
	course_load = 3;
	current_year = 2015;
	is_all_ok = 57;
	myName = "Chris";
	middle_intl = 'M';

	//perform task
	cout << "# of hours= " << course_load << ", current year = " << current_year << endl;
	cout << "is_all_ok= " << is_all_ok << endl;
	cout << "My name is " << myName << " " << middle_intl << endl;

	return 0;


}