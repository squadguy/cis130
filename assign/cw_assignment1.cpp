/*	Program Name: Circut Board Price Generator
	Programmer Name: Christopher Wampnar
	Purpose:  	The program determines the selling 
				price a store should charge by adding 
				40% to the cost to manufacture board.  
	Orignally compiled using g++
*/

#include <iostream>
using namespace std;

int main()
{

	double production_cost; //manufacturer's cost to make board
	double percent_markup; // 40% markup
	double sale_price; //price compnany should charge

	production_cost = 12.67;
	percent_markup = 1.40;
	sale_price = production_cost * percent_markup;

	cout << "Selling price: " << sale_price << endl;//Display the selling price.

	return 0;
}