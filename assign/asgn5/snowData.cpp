#include <iostream>
#include <iomanip>
#include <string>
#include "snowData.h"
using namespace std;

SnowData::SnowData(string _monthName, int _startDate, double _inches[])
	{
		monthName = _monthName;
		startDate = _startDate;
		for(int i = 0; i < 7; i++)
			inches[i] = _inches[i];
		for (int i = 0; i < 7; i++)
			dates[i] = startDate + i;
	}

void SnowData::sortByInches()
{
	for (int pass = 0; pass < 7; pass++)
		for (int i = 0; i < 6; i++)
			if(inches[i] > inches[i + 1])
			{
				swap(inches[i], inches[i+1]);
				swap(dates[i], dates[i+1]);
			}
}

void SnowData::sortByDate()
{
	for (int pass = 0; pass < 7; pass++)
		for (int i = 0; i < 6; i++)
			if(dates[i] > dates[i + 1])
			{
				swap(inches[i], inches[i+1]);
				swap(dates[i], dates[i+1]);
			}
}

void SnowData::print()
{
	cout << "Snow Report January 12 - 19" << endl;
	cout << "Date             Base" << endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < 7; i++)
		cout << monthName << "  " << dates[i] << "\t" << inches[i]<< endl;
	cout << endl;
}

double SnowData::getAverage()
{
	double average;
	double total;

	for (int i = 0; i < 7; i++)
	{
		total += inches [i];
	}
	average = total/7;

	return average;
}