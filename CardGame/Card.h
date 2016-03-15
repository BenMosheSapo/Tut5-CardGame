#pragma once
#include <string>
using namespace std;
class Card
{
private:
	int number;
	string colour;
public:
	Card(int num = 0,string col="");
	string Colour();
	int Number();
	void print();
	~Card();
};

