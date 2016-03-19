#include "DeckOfCards.h"
#include <iostream>
DeckOfCards::DeckOfCards()
{
	int i;
	int j;
	int k = 0;
	Deck = new Card*[20];
	for (j = 1; j < 3; j++){
		for (i = 1; i < 11; i++){
			if (j == 1)
				Deck[k] = new Card(i, "red");
			else
				Deck[k] = new Card(i, "black");		
			k++;
		}
	}
}

DeckOfCards DeckOfCards::reset(){
	return DeckOfCards();
}

void DeckOfCards::shuffle(){
	int i;
	Card* temp;
	int random,random2;
	for (i = 0; i < 50; i++){
		random = rand() % numCards;
		random2 = rand() % numCards;
		temp = Deck[random];
		Deck[random] = Deck[random2];
		Deck[random2] = temp;
	}
}

void DeckOfCards:: print() {
	int i;
	for (i = 0; i < 20; i++) {
		cout << (*(Deck[i])).Number() << (*(Deck[i])).Colour()<< endl;
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
	c.shuffle();
	c.print();
	return 0;
}