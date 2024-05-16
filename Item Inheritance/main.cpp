#include <iostream>
#include "Candle.h"

using namespace std;

int main()
{
    //Jessica Markiv

    Item item1, item2;
    Candle candle1, candle2;

    //print default item constructor
    cout << "Item Default Constructor (without parameters)\n" << endl;
    item1.print_item();

    //print default candle constructor
    cout << "Candle Default Constructor (without parameters)\n" << endl;
    candle1.print_candle(); 

    //set and print item2 using setters
    cout << "Set Item using setters\n" << endl; 

    item2.set_availability(true);  
    item2.set_price(13.99);
    item2.print_item();

    //set and print candle2 using setters
    cout << "Set Candle using setters\n" << endl;

    candle2.set_availability(true);
    candle2.set_price(20);
    candle2.set_scent("Lavender");
    candle2.set_lit(false);
    candle2.print_candle();

    return 0;
}

#if 0
Instructions
1)Write a program that uses a class with the following :
At least 2 member variables

Your class object should be one of the following : chair, candle, gift cards
Create a Derived Class and Base Class
2) Write the definitions of the member functions of the class, (getters / setters), and 1 type of constructors

3) Write a Display function to print your class and constructors
#endif