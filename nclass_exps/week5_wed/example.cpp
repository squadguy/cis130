#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

void print_1d_arr(int arr[], int size);

int main()
{
	const int SIZE = 12;
	int numbers[SIZE];
	for (int i = 0; i < SIZE; i++)
		numbers[i] = rand() % 101;
	print_1d_arr(numbers, SIZE);	

	for (int pass = 1; pass < SIZE; pass++)
	{
		//for (int i = 0; i <= (SIZE - 2); i++)
		for (int i = 0; i + 1 < SIZE ; i++)
		{
			if(numbers[i] > numbers [i+1])
			{
				int temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
	}
	print_1d_arr(numbers, SIZE);
	return 0;
}

int main2()
{
	//BINARY SORT
	const int SIZE = 12;
	int numbers [SIZE] = {10, 12, 23, 25, 34, 56, 65, 69, 78, 89, 92, 99};
	print_1d_arr(numbers, SIZE);
	int startSub = 0, endSub = SIZE - 1, midSub, inp_val = 100;
	
	midSub = (startSub + endSub)/2;

	while(startSub <= endSub && inp_val != numbers[midSub])
	{
		if (inp_val < numbers[midSub])
			endSub = midSub - 1;
		else if (inp_val > numbers[midSub])
			startSub = midSub + 1;
		midSub = (startSub + endSub) / 2;
	}

	if (inp_val == numbers[midSub])
		cout << "found\n";
	else
		cout << "not found\n";

	return 0;
}

int main1()
{

	const int SIZE = 12;
	int numbers[SIZE], inp_val = 56, i =0;
	for (int i = 0; i < SIZE; i++)
		numbers[i] = rand() % 101;
	print_1d_arr(numbers, SIZE);

	while (i < SIZE && inp_val != numbers[i])
		i++;

	if (i < SIZE)
	{
		cout << "Found in array" << endl;
		/* code */
	}
	else
		cout << "Not in array" << endl;

	return 0;
}

void print_1d_arr(int arr[], int size)
	{
		for (int i= 0; i < size; i++)
			cout << arr[i] << "    ";
		cout << "\n ----------------------- \n";
	}