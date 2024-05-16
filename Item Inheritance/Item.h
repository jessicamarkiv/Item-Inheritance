#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item
{
private:
	bool available;
	double price;
public:
	Item();

	void set_availability(bool available);
	string get_availability();

	void set_price(double price);
	double get_price();

	void print_item();
};
#endif