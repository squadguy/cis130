#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

void print_1d_arr(int arr[], int size)
void print_parr(const int _ids[], const string _names[], int size);//consts prevents change from function

int main()
{

	const int SIZE = 12;
	int numbers[SIZE];
	for (int i = 0; i < SIZE; i++)
		numbers[i] = rand() % 101;
	print_1d_arr(numbers, SIZE);

	return 0;
}

void print_1d_arr(int arr[], int size)
	{
		for (int i= 0; i < size; i++)
			cout << arr[i] << "    ";
		cout << "\n ----------------------- \n";
	}


int main3()
{

	float stu_t_sc[5][4]= {
				{90, 95, 82, 0},
				{93, 93, 65, 0},
				{89, 90, 92, 0},
				{85, 87, 89, 0},
				{90, 92, 95, 0}
			};
	cout << fixed << setprecision(1);

	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 3; c++)//sets loop to scan first 3 elements (scores)
		{
			cout << stu_t_sc[r][c] << '\t';//displays each student's scores with a tab between
			stu_t_sc[r][3] += stu_t_sc[r][c];//totals students score stores it in [3] 
		}
		float row_avg = stu_t_sc[r][3]/3;
		cout << row_avg << endl;
	}

	return 0;
}

int main2()
{
	//two demensional array [row] [colums]
	float stu_t_sc[5][3]= {
				{90, 95, 82},
				{93, 93, 65},
				{89, 90, 92},
				{85, 87, 89},
				{90, 92, 95},
	
	};

/*
	for (int r =0; r < 5; r++,  cout << endl)
		for (int c = 0; c < 3; c++, cout << '\t')
			cout << stu_t_sc[r][c];
*/

	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << stu_t_sc[row][col] << '\t';
		}
		cout << endl;
	}


	return 0;
}

/*
int main1()
{

	int stu_ids[] = {456, 987, 670, 345};
	string stu_names[] = {"Maya", "Pam", "Tim", "Dave"};
	
	/*for (int i=0; i<4; i++)
	{
		cout << stu_names[i] << "'s id is " << stu_ids[i] << "." << endl;
	}*/

	print_parr(stu_ids, stu_names, 4);



	return 0;
}*/


void print_parr(const int _ids[], const string _names[], int size)//const prevent change from function
{
	for (int i=0; i<4; i++)
		cout << _names[i] << ":" << _ids[i] << endl;
	
}

