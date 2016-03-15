#pragma once
#include "Card.h"
class DeckOfCards
{
private:
	int numCards = 20;
	Card** Deck;
public:
	DeckOfCards();
	DeckOfCards reset();
	void shuffle();
	Card draw();
	Card peek();
	int numberOfCards();
	~DeckOfCards();
};

