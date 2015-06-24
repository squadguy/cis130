#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//for loop
int main()
{

	int user_num, num_inter;

	for (num_inter = 0; num_inter < 4; num_inter++)
	{
		cout << "#"<< (num_inter + 1) << " Enter number 0-20: :";
		cin >> user_num;

		while(user_num < 0 || user_num > 20)
		{
			cout << "must be 0-20\n";
			cout << "#"<< (num_inter + 1) << " Enter number 0-20: :";
			cin >> user_num;
		}


		cout << "#" << (num_inter + 1) << ". " << user_num << endl;
	}

	return 0;
}


//password checking program with do/while loop
int main9()
{

	string passw, corr_pw = "cis130";
	int num_att = 0;

	do
	{
		cout << "Enter password (#" << (num_att + 1) << " of 3):";
		cin >> passw;
		num_att++;
	} while  (passw != corr_pw && num_att < 3);

	if (passw == corr_pw)
		cout << "Login succeeded in " << num_att << " attempts\n";
	else
		cout << "Tried 3 times and failed\n";

	return 0;
}



//password checking program
int main8()
{
	string passw, corr_pw = "cis130";
	int num_att=1;

	cout << "Enter password: ";
	cin >> passw;

	while(passw != corr_pw && num_att < 3)
	{

		cout << "Incorrect!  Enter password: (#"
			<< (num_att + 1) << " of 3):" ;
		cin >> passw;
		num_att++;
	
	}

	if (passw == corr_pw)
		cout << "Login successful in " << num_att << " attempts\n";
	else
		cout << "Tried 3 times and failed\n";

	return 0;
}



int main7()
{

	int mynum;
	cout << "Enter a number (0-100): ";
	cin >> mynum;

	while (cin.fail() == true || (mynum < 0 || mynum > 100) ) // failed or data in not in correct range
	{
		if(cin.fail())
		{
			cout << "Must be numeric\n";
			cin.clear();//must clear errors before ignore
			cin.ignore(100, '\n');
			//make cin ok
		}
		else if (mynum < 0)
			cout << "must be greater than or equal to 0\n";
		else
			cout << "Must be less than or eaqual to 100\n";
			
		cout << "Enter a number (0-100): ";
		cin >> mynum;
	}

	cout << "You entered: " << mynum << endl;

	return 0;
}

int main6()
{
	int mynum;
	cout << "Enter a number (0-100) : ";  //Max and min inclusive
	cin >> mynum;

	while (mynum < 0 || mynum > 100)
	{
		cout << "Invalid! \nEnter a number (0-100): ";
		cin >> mynum;

	}

	cout << "You entered : " << mynum << endl;
	return 0;
}			
 

int main5 ()
{
	int lcv = 0;

	while (lcv < 51)
	{
		if(lcv % 3 == 0 && lcv !=0)
			cout << endl;
		cout << lcv << '\t';
				
		lcv ++;
	}
	cout << endl;
	
	return 0;
}


int main4 ()
{

	int lcv = 0;

	while (lcv < 26)
	{
		cout << "lcv = " << lcv << endl;
		lcv+=5;
	}	
		
	return 0;
}


//DON'T DO THIS... IT WORKS BUT DON'T.. It's an infinite loop
int main3()
{

	int lcv = 0;

	// while(true)
	while (true == true)
	{
		cout << lcv << endl;
		lcv ++;
		if (lcv == 4)
			break;
	}	
		
	return 0;
}

int main2()
{

	int lcv = 0;

	while(lcv < 5)
		cout << "lcv= " << lcv ++ << endl;

		
		
	return 0;
}


int main1()
{

	int lcv; //Declare loop control variable
	lcv = 1;

	while (lcv < 5)
	{
		cout << "lcv= " << lcv << endl;
		lcv ++;
		// goback to line 9
	}
	cout << "lcv after end of loop = " << lcv << endl;
	return 0;
}