/*
Program Name: Lab #2, How far can a car go on a tank of gas
Author: Christopher Wampnar
Purpose:	The program determines the distance a vehicle can go
			on one tank of gas.
*/

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double tank_size, gpm_town, gpm_highway, distance_town, distance_highway;
	
	//assign values
	tank_size = 20.0;
	gpm_town = 21.5;
	gpm_highway = 26.8;
	
	distance_town = tank_size * gpm_town;
	distance_highway = tank_size * gpm_highway;

	cout << "In town, one gallon gets the car " 
	<< distance_town << " miles." << endl;

	cout << "On the highway, one gallon gets the car "
	<< distance_highway << " miles." << endl;

	return 0;
}