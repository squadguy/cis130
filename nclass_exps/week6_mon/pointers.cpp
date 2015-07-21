#include <iostream>
using namespace std;


void change_number(int &param);
void work_with_arr(int*);

int main()
{
	int *ptr1;
	int arr_num[6] = {45, 89, 34, 70, 12, 44};
	ptr1 = arr_num;

	for (int i = 0; i < 6; i++)
		cout << *(arr_num + i) << endl;


	cout << "------------\n";

	for (int i = 0; i < 6; i++)
		cout << *(ptr1 + i) << endl;

	work_with_arr(arr_num);


	return 0;
}
void work_with_arr(int* ptr1)
{
	int numbers[] = {57,78, 90};
	cout << numbers << endl;
	ptr1 = numbers;
}


int main4()
{
	int *ptr1;
	int arr_num[6] = {45, 89, 34, 70, 12, 44};
	ptr1 = arr_num;

	cout << "*ptr1=" << *ptr1 << endl;
	cout << "*arr_num=" << *arr_num << endl;
	cout << arr_num[0] << endl;
	cout << ptr1[0] << endl;

	cout << "arr_num[1]=" << arr_num[1] << endl;
	cout << "ptr1[1]=" << ptr1[1] << endl;
	cout << "*(arr_num +1)= " << *(arr_num + 1) << endl;
	cout << "*(ptr1 +1)= " << *(ptr1 + 1) << endl;



	return 0;
}

int main3()
{
	int num1 = 12;
	int *ptr1 = &num1;
	int arr_num[6] = {45, 89, 34, 70, 12, 44};
	cout << "arr_num=" << arr_num << endl;
	cout << "ptr1 =" << ptr1 << endl;

	return 0;
}


int main2()
{
	int number = 100;
	int *ptr_1;
	ptr_1 = &number;

	cout << ptr_1 << endl;

//number = 45;
	*ptr_1 = 45;
	cout << "number =" << number << endl;
	change_number(number);
	cout << "number = " << number << endl;

	return 0;
}

void change_number(int &param)
{
	param += 300;
}


int main1()
{
	int num1 = 15;
	//int* ptrn_to_num1; --this works too
	int *ptrn_to_num1;

		ptrn_to_num1 = &num1;

	cout << "line12. num1 = " << num1 << endl;
	cout << "line13. &num1= " << &num1 << endl;
	cout << "line14. ptrn_to_num1= " << ptrn_to_num1 << endl;
	cout << "line15. &ptrn_to_num1= " << &ptrn_to_num1 << endl;
	cout << "line16. &main =" << &main << endl;

	return 0;
}