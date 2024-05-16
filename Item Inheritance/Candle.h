#ifndef CANDLE_H
#define CANDLE_H

#include "Item.h"

class Candle : public Item
{
private:
	bool lit;
	string scent;
public:
	Candle();

	void set_lit(bool lit);
	string get_lit();

	void set_scent(string scent);
	string get_scent();

	void print_candle();
};
#endif