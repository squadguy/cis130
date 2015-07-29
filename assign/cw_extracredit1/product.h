#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

class product
{
private:
	string id;
	string name;
	float cost;
	float price;
	string supplierId;
public:
	product(void);
	void setId(string);
	void setName(string);
	void setCost(float);
	void setPrice(float);
	void setSupplierId(string);

	string getId();
	string getName();
	float getCost();
	float getPrice();
	string getSupplierId();

	void increasePriceBy10Percent();

	void print();
};
#endif