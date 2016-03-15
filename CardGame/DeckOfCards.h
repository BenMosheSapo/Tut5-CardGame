#pragma once
#include "Card.h"
class DeckOfCards
{
private:
	int numCards = 20;
	Card *Deck = new Card[20];
	Card cards[20];
public:
	DeckOfCards();
	DeckOfCards reset();
	void shuffle();
	Card draw();
	Card peek();
	int numberOfCards();
	~DeckOfCards();
};

