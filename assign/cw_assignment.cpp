//Name: Christopher Wampnar
//Lab 2: page 237, #10
//Purpose: The program totals checking fees for a business
//NOTE: Orginally compiled using g++

#include <iostream>
using namespace std;

int main()
{

	int num_checks;//number of checks written in month
	double fee_total,//total fee owed to bank 
	       check_fee;//variable cost per check fee
	double tot_check_fee = check_fee * num_checks;//needed for testing
	double monthly_fee = 10.0;//fixed montly bank fee
	double total_fee = monthly_fee + tot_check_fee;//total cost

	cout<<"How many checks did you write this month"<<endl;
	cin>>num_checks;

	if (num_checks < 0)
	{
		do
		{
			cout<<"Number of written checks cannot be less than 0" << endl;
		cout<<"Please enter number of checks written this month"<< endl;
		cin >> num_checks;
	}
	while (num_checks < 0);
	}	
	/*if(num_checks < 0)
	{
		cout<<"Number of written checks cannot be less than 0"<< endl;
		cout<<"Enter number of checks written this month"<<endl;
	}*/
	else if (num_checks > 20)
		check_fee = 0.10;
	else if (num_checks > 30)
		check_fee = 0.08; 
	else if (num_checks > 40)
		check_fee = 0.06;
	else
		check_fee = 0.04;
	

	cout<<"Total number of checks written this month" << num_checks << endl;
	cout << "The fee per check is $" << check_fee << endl;
	cout<<"The cost of the check fee is $"<<tot_check_fee<<endl;

	fee_total = monthly_fee + tot_check_fee;
	cout<<"The total cost to pay for the checks are $ "<<fee_total<<endl;

	return 0;
}
