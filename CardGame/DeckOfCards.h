#pragma once
#include "Card.h"
class DeckOfCards
{
private:
	Card Deck[20];
	Card *Cards[20];
public:
	DeckOfCards();
	DeckOfCards reset();
	void shuffle();
	Card draw();
	Card peek();
	int numberOfCards();
	~DeckOfCards();
};

