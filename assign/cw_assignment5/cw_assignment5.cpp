/*
Name: Christopher Wampnar
Chapter 9 - Programming Challenge 5, Hit the Slopes
Purpose:  This program stores a week's worth of snow data for a ski resort
in an array of structures. It then sorts and displays the data 
in ascending order of base snow depth.
NOTE: Orignally written in Sublime Text 2, compiled with G++.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "snowData.h"

int main()
{                  
    double snow_inches[7] = {42.5, 42.3, 42.8, 43.1, 43.4, 43.8, 43.1};

    SnowData snow_data("January", 12, snow_inches);
    
    snow_data.sortByInches();
    cout << "--------- Sorted by Inches ---------\n";
    snow_data.print();

    snow_data.sortByDate();
    cout << "---------- Sorted by Date -------\n";
    snow_data.print();

    cout << "Average snowfall = " << setprecision(2)  << fixed
        << snow_data.getAverage() << " inches\n";

    return 0;
}