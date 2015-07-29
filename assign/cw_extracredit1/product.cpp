#include "product.h"
#include <iostream>

product::product(void)
{
	supplierId = "-none-";
	id = "--";
	name = "--none--";
	cost = price = 0.99f;
}
void product::setSupplierId(string _supplierId)
{
	supplierId = _supplierId;
}
void product::setId(string _id)
{
	id = _id;
}
void product::setName(string _name)
{
	name = _name;
}
void product::setCost(float _cost)
{
	while (_cost < 0)
	{
		cout << "Cost cannot be negative\n";
		cout << "Enter cost again:\n";
		cin >> _cost;
	}
	cost = _cost;
}
void product::setPrice(float _price)
{
	while(_price < 0)
	{
		cout << "Price cannot be less than 0\n";
		cout << "Please enter Price again 0\n";
		cin >> _price;
	}
	price = _price;
}
string product::getId()
{
	return id;
}
string product::getName()
{
	return name;
}
float product::getCost()
{
	return cost;
}
float product::getPrice()
{
	return price;
}
string product::getSupplierId()
{
	return supplierId;
}

void product::increasePriceBy10Percent ()
{
	price = price + (price * 0.10);
}

void product::print()
{
	cout << setprecision(2) << fixed;
	cout << "id=" << id << ", Name=" << name << ", Cost = " 
		<< cost << ", Price= " << price << ", Supplier ID = " 
		<< supplierId << endl;
}

