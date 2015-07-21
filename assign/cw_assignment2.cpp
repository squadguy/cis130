/*
NAME:          Christopher Wampnar
ASSIGNMENT #2: Page 237, #10
DISCRIPTION:   The program calculates the total cost for the checks written during
	       a month.  It incluldes a variable check fee rate based on volume of
	       checks written during month. Uses a while loop for validation.
NOTES:         Originally compiled using g++.
               Written using Vim.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double monthly_fee = 10.0;  //stores fixed montly cost
	int    num_checks;          //stores number of checks written in a month
	double check_fee,           //stores variable cost per check
	       total_check_fee,     //stores the cost for checks (check_fee * num_checks)
	       total_bank_fee;      //Total bank fee (monthly_fee + total_check_fee)
	
	//Get number of checks from user
	cout << endl;
	cout << "Enter number of checks written in month"<<endl;
	cin >> num_checks;
	cout << endl;

	//Input validation: requires num_checks to be at least 0. 
	while (num_checks < 0)
	{
		cout << "Number of checks must be greater than 0."<< endl;
		cout << "Please enter number of checks written in month:"<< endl;
		cin>>num_checks;
	}
	
	//variable rates for checks depending on volume written
	if (num_checks < 20)
		check_fee = 0.10;
	else if (num_checks < 40)
		check_fee = 0.08;
	else if (num_checks < 60)
		check_fee = 0.06;
	else
		check_fee = 0.04;

	//calculates variables
	total_check_fee = num_checks * check_fee;//configures costs for checks
	total_bank_fee = monthly_fee + total_check_fee;//configures total cost to company

	//Outputs
	
	cout << endl <<"******************************"<<endl;
	cout << "Number of checks written this month: " << num_checks << endl;
	cout << "The check fee for " << num_checks << " is $" << fixed << showpoint << setprecision(2)
	     << check_fee << " per check." << endl;
	cout << "That equals $"<< fixed << showpoint << setprecision(2) << total_check_fee<< endl;
	cout << "******************************"<< endl;
	cout<< endl;

	cout << "********************************"<< endl;
	cout << "The bank fee this month is: $" <<fixed << showpoint << setprecision(2) <<  total_bank_fee << endl;
	cout << "********************************"<< endl;
	cout << endl;

	return 0;
}
