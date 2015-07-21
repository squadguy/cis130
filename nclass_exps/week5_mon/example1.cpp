#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

	int numbers[3];
	srand(time(0));

	for(int i=0; i<3; i++)
	{
		numbers[i] = rand() % 21;
	}

	for(i=0; i<3; i++)
	{
		cout << numbers[i] << endl;
	
	}
	return 0;
}


int main1()
{
	int numbers [3];

	numbers[0] = 100;
	numbers[1] = 21;
	numbers[2] = 1;

	cout << numbers << endl;

	return 0;
}
