#pragma once
#include "Card.h"
#include <vector>
class DeckOfCards
{
private:
	int numCards = 20;
	//Card** Deck;
	vector <Card> v;
public:
	DeckOfCards();
	DeckOfCards reset();
	void shuffle();
	Card draw();
	Card peek();
	int numberOfCards();
	void print();
	~DeckOfCards();
};

