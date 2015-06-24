//Make a switch statement

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int choice;

	cout<<"Pick 1, 2, 3, or 4"<<endl;
	cin>>choice;

	switch(choice)
	{

		case '1': cout<< fixed << showpoint << setprecision(2)<< endl;
		case '2': cout<< fixed << showpoint<< setprecision(4)<< endl;
		case '3': cout<< fixed << showpoint<< setprecision(4)<< endl;
		case '4': cout << fixed << showpoint << setprecision(6)<< endl;
		default : cout << fixed << showpoint << setprecision(8)<< endl;
	}

	return 0;
}
