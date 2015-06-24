#include <iostream>
using namespace std;

int main()
{

	int grade, temperature, hours;

	cout<< "What is your grade?(0 - 100)"<<endl;
	cin>> grade;

	if (grade >= 0 && grade <=100)
	{
		cout<< "The number is valid"<<endl;
	}

	cout <<"What is the temperature (-50 - 100)"<< endl;
	cin>>temperature;

	if (temperature >= -50 && temperature <=150)
		cout << "The number is valid" << endl;

	cout <<"What is the number of hours (0 - 80)"<< endl;
	cin>>hours;

	if (hours < 0 || hours > 80)
		cout<< "The number is invalid" << endl;
	
	return 0;
}
