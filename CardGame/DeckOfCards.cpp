#include "DeckOfCards.h"
#include <iostream>
DeckOfCards::DeckOfCards()
{
	int i;
	int j;
	for (j = 1; j < 3; j++){
		for (i = 1; i < 11; i++){
			if (j == 1)
				cards[(i*j)-1] = Card(i, "red");
			else
				cards[(i*j)-1] = Card(i, "black");
			Deck[(i*j)-1] = cards[(i*j)-1];
			cout << Deck[(i*j)-1].Colour() << endl;
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
		temp = cards[random];
		cards[random] = cards[rand() % 20];
	}
}

Card DeckOfCards::draw(){
	Card temp = cards[0];
	delete[0] cards;


}
DeckOfCards::~DeckOfCards()
{
}

int main(){
	DeckOfCards c;
	return 0;
}