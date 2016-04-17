#include "DeckOfCards.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
DeckOfCards::DeckOfCards()
{
	int i;
	int j;
	int k = 0;
//	Deck = new Card*[20];
	Card* Deck = new Card;
	for (j = 1; j < 3; j++){
		for (i = 1; i < 11; i++){
			if (j == 1) {
				//Deck[k] = new Card(i, "red");
				Deck = new Card(i, "red");
				v.push_back(*Deck);
			}				
			else {
//				Deck[k] = new Card(i, "black");	
				Deck = new Card(i, "black");
				v.push_back(*Deck);
			}
	
			k++;
		}
	}
}

Card DeckOfCards::draw() {
	if (numCards != 0) {
		Card temp = v[numCards-1];
		v.pop_back();
//		Card temp = *(Deck[numCards-1]);
//		delete Deck[numCards-1];
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
	return v[numCards - 1];
//	return *Deck[numCards-1];
}

DeckOfCards DeckOfCards::reset(){
	return DeckOfCards();
}

void DeckOfCards::shuffle(){
	if (numCards != 0) {
		random_shuffle(v.begin(), v.end());
		//int i;
		//Card* temp;
		//int random, random2;
		//for (i = 0; i < 50; i++) {
		//	random = rand() % numCards;
		//	random2 = rand() % numCards;
//			temp = Deck[random];
//			Deck[random] = Deck[random2];
//			Deck[random2] = temp;
	}
	else
		cout << "Sorry there are no more cards in the Deck"<<endl;
}

void DeckOfCards:: print() {
	int i;
	for (Card temp:v) {
		temp.print();
//		cout << (*(Deck[i])).Number() << (*(Deck[i])).Colour()<< endl;
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
	for (i = 0; i < 0; i++) {
		Temp = c.draw();
	}
	c.print();
	return 0;
}