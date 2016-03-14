#include "Card.h"
#include <iostream>


Card::Card(int num,string col)
{
	number = num;
	colour = col;
}

string Card::Colour(){
	return colour;
}

int Card::Number(){
	return number;
}

void Card::print(){
	cout << colour << " " << number << endl;
}


Card::~Card()
{
}
