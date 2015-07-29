#include <iostream>
using namespace std;
#include "product.h"

int main()
{
	product p1;
	printf("After constructor..\n");
	p1.print();

	p1.increasePriceBy10Percent();
	printf("\n--------------\nAfter increasePriceBy10Percent..\n");
	p1.print();

	//system("pause");
	return 0;
}