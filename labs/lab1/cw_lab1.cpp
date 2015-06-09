/*
Program Name: cw_assignment1.cpp
Author: Christopher Wampnar
Purpose: 	Develop program which adds 40% to the base cost of
			a circut board to determine a selling price.
*/

#include <iostream>
using namespace std;

int main ()
{
	//declare variables
	double base_price, prcnt_profit, sell_price;
	//assign requested 40% profit
	prcnt_profit = 1.4;
	//assign production cost of board
	base_price = 12.67;
	//determine sell_price calculation
	sell_price = base_price * prcnt_profit;

	cout << sell_price << endl;

	return 0;

}