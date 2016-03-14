#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
	int i;
	int j;
	for (j = 0; j < 2; j++){
		for (i = 1; i < 11; i++){
			if (j == 0)
				Deck[i] = Card(i, "red");
			else
				Deck[i] = Card(i, "black");
		}
	}
}


DeckOfCards::~DeckOfCards()
{
}
