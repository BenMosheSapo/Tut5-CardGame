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

Card DeckOfCards::draw() {
	if (numCards != 0) {
		Card temp = *(Deck[numCards-1]);
		delete Deck[numCards-1];
		numCards -= 1;
		return temp;
	}
	else
		cout << "Sorry there are no more cards in the Deck"<<endl;
}

int DeckOfCards::numberOfCards() {
	return numCards;
}

Card DeckOfCards::peek() {

	return *Deck[numCards-1];
}

DeckOfCards DeckOfCards::reset(){
	return DeckOfCards();
}

void DeckOfCards::shuffle(){
	if (numCards != 0) {
		int i;
		Card* temp;
		int random, random2;
		for (i = 0; i < 50; i++) {
			random = rand() % numCards;
			random2 = rand() % numCards;
			temp = Deck[random];
			Deck[random] = Deck[random2];
			Deck[random2] = temp;
		}
	}
	else
		cout << "Sorry there are no more cards in the Deck"<<endl;
}

void DeckOfCards:: print() {
	int i;
	for (i = 0; i < numCards; i++) {
		cout << (*(Deck[i])).Number() << (*(Deck[i])).Colour()<< endl;
	}
}

DeckOfCards::~DeckOfCards()
{
}

int main(){
	DeckOfCards c;
	c.shuffle();
	Card Temp;
	int i;
	for (i = 0; i < 25; i++) {
		Temp = c.draw();
	}
	return 0;
}