#include "Item.h"

Item::Item()
{
	this->available = 0;
	this->price = 0;
}

void Item::set_availability(bool available)
{
	this->available = available;
}
string Item::get_availability()
{
	string is_available;
	if (this->available == true)
	{
		is_available = "Yes";
	}
	else
	{
		is_available = "No";
	}
	return is_available;
}

void Item::set_price(double price)
{
	this->price = price;
}
double Item::get_price()
{
	return this->price;
}

void Item::print_item()
{
	cout << "Price: $" << price \
		<< "\nAvailable: " << get_availability() << endl;
	cout << "---------------------------" << endl;
}