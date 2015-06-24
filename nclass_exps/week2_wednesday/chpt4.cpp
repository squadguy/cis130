#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cstdio> // needed to use printf("%type(s)", variables)
using namespace std;

int main()
{

	

	return 0;
}


int main7()
{
	char grade;
	cout << "Enter Grade : ";
	cin >> grade;

	switch (grade) // must be integer (or char) data type
	{
		case 'A':
			cout << "Wonderful\n";
			break;
		case 'B':
			cout << "Good\n";
			break;
		case 'C':
			cout << "OK\n";
			break;
		case 'D':
			cout << ":-(\n";
			break;
		default:
			cout << "--fail--\n";

	}

	return 0;
}

int main6()
{
	int myscore;
	cout << "Enter value (0-20): ";
	cin >> myscore;

	if (myscore >= 0 && myscore <=20) //validates myscore between 0-20
		cout<< "valid\n";
	else
		cout << "invalid\n";

	if (myscore < 0 || myscore > 20)
		cout<< "---Invalid\n`";
	else
		cout << "---Valid\n";
	return 0;
}

int main5()
{
	srand(unsigned(time(0)));
	int score = rand()% 46 + 55; //for number 55-100

	printf ("score= %i\n", score);

	if(score >= 90)
			cout << "A\n";
	else 
	{
		if(score >= 80)
			cout << "B\n";
		else 
		{
			if(score >= 70)
				cout<< "C\n";
			else
			{
				if (score >= 60)
					cout << "D\n";
				else
					cout << "F\n";
			}
		}
	}


	return 0;
}

int main4()
{
	int num1 = 10;
	printf("%i\n", num1);
	return 0;
}

int main3()
{

	srand(unsigned(time(0)));
	int num1 = rand() % 11, numer = rand() %101, denom = rand() % 4 + 1;
	float float1 = numer / float(denom);
	
	cout << "num1 = " << num1 << " , numer= " << 
		numer << ", denom = " << denom <<
		", float 1 = " << float1 << endl;

		if (num1 > float1)
			cout << "num1 > float 1\n";

	return 0;
}

int main2()
{
	srand(time(unsigned(NULL)));
	int num1, num2; 

	num1 = rand() % 11;
	num2= rand() % 11;


	cout << "num1 = " << num1 << " num2 = " << num2 << endl;

	if(num1 > num2)
		cout << "num1 > num2\n";

	if(num1 < num2)
		cout << "num1 < num2\n";

	return 0;
}