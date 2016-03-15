#include "DeckOfCards.h"
#include <iostream>
DeckOfCards::DeckOfCards()
{
	int i;
	int j;
	Deck = new Card*[20];
	for (j = 1; j < 3; j++){
		for (i = 1; i < 11; i++){
			if (j == 1)
				*Deck = new Card(i, "red");
			//Deck[(i*j)-1] = new Card(i, "red");
			else
				*Deck = new Card(i, "black");
			*Deck++;
		}
	}
}

DeckOfCards DeckOfCards::reset(){
	return DeckOfCards();
}

void DeckOfCards::shuffle(){
	int i;
	Card temp;
	int random;
	for (i = 0; i < 50; i++){
		random = rand() % numCards;
		temp = *Deck[random];
		*Deck[random] = *Deck[rand() % 20];
	}
}

//Card DeckOfCards::draw(){
//	Card temp = Deck[0];
//	delete Deck;
//
//
//}
DeckOfCards::~DeckOfCards()
{
}

int main(){
	DeckOfCards c;
	return 0;
}