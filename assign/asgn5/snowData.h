#ifndef SNOWDATA_H
#define SNOWDATA_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class SnowData
{
private:
	int dates[7];
	double inches[7];
	string monthName;
	int startDate;

public:
	double getAverage();
	void print();
	SnowData(string _monthName, int _startDate, double _inches[]);
	void sortByDate();
	void sortByInches();
};
#endif