//This program calculates payrates for employees including overtime.

#include <iostream>
#include <iomanip>
using namespace std;

	const double PAY_RATE = 22.55;
	const double BASE_HOURS = 40.00;
	const double OT_MULTIPLIER = 1.5;
	
	double get_base_pay(double);
	double get_overtime_pay(double);
	
int main ()
{

	double hours,
	       base_pay,
	       overtime_pay = 0.0,
	       total_pay;

	//Get hours worked
	cout << "How many hours did you work?"<< endl;
	cin >> hours;

	//Get base pay
	base_pay = get_base_pay(hours);

	//Get overtime pay
	overtime_pay = get_overtime_pay(hours);

	//Get total pay
	total_pay = base_pay + overtime_pay;

	//Display pay

	cout << setprecision(2) << fixed << showpoint;
	cout << "Base pay $" << base_pay << endl;
	cout << "OT pay $" << overtime_pay << endl;
	cout << "Total pay $" << total_pay << endl;

	return 0;
}

//GET_BASE_PAY FUNCTION

double get_base_pay(double hours_worked)

{
	double base_pay;

	if (hours_worked > BASE_HOURS)
		base_pay = BASE_HOURS * PAY_RATE ;
	else
		base_pay = hours_worked * PAY_RATE;

	return base_pay;
}

//GET_OVERTIME_PAY

double get_overtime_pay(double hours_worked)
{
	double overtime_pay;

	if (hours_worked > BASE_HOURS)
	{	overtime_pay = 
			(hours_worked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
	}
	else
		overtime_pay = 0.0;
	

	return overtime_pay;
}
