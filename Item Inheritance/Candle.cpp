#include "Candle.h"

Candle::Candle()
{
	this->lit = false;
	this->scent = "None";
}

void Candle::set_lit(bool lit)
{
	this->lit = lit;
}
string Candle::get_lit()
{
	string l;
	if (this->lit == true)
	{
		l = "Yes";
	}
	else
	{
		l = "No";
	}
	return l;
}

void Candle::set_scent(string scent)
{
	this->scent = scent;
}
string Candle::get_scent()
{
	return this->scent;
}

void Candle::print_candle()
{
	cout << "Scent: " << scent \
		<< "\nAvailable: " << get_availability() \
		<< "\nPrice: $" << get_price() \
		<< "\nLit: " << get_lit() << endl;
	cout << "-------------------------" << endl;
}