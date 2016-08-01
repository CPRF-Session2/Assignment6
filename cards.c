/*Jinoo Hong*/
/*Write a program `cards.c` that implements a deck of cards.  Implement the suits as an enum, and the cards as a struct containing the value and suit.  Implement a function `drawCard()` to generate a random card and `getSuit()` to print out the the suit properly.  In main, draw and print out 5 cards in the following format:*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int under11 = 0;

struct card {
	char value[6];
	char suit[10];
	int num;
};

struct card currentcard;

enum suits {
	diamonds,
	clubs,
	hearts,
	spades
};

void drawCard() {
	int randvalue, randsuit;
	randvalue = (rand() %13)+1;
	randsuit = rand() %4; 
	under11=0;
	if (randvalue <=10&&randvalue!=1) {
		currentcard.num= randvalue;
		under11 = 1;
	}
	else {
		switch (randvalue) {
			case 1:
				strcpy(currentcard.value, "Ace");
				break;
			case 11:
				strcpy(currentcard.value, "Jack");
				break;
			case 12:
				strcpy(currentcard.value, "Queen");
				break;
			case 13:
				strcpy(currentcard.value, "King");
				break;
		}
	}
	if (randsuit==diamonds) {
		strcpy(currentcard.suit, "diamonds");
	}
	else if (randsuit==clubs) {
		strcpy(currentcard.suit, "clubs");
	}
	else if (randsuit==hearts) {
		strcpy(currentcard.suit, "hearts");
	}
	else {
		strcpy(currentcard.suit, "spades");
	}
	// Is there a way to use switch function or more effective method to get this "suits" done?
}

void getCard () {
	if (under11==0) {
		printf("%s of %s", currentcard.value, currentcard.suit);
	}
	else {
		printf("%d of %s", currentcard.num, currentcard.suit);
	}
}

int main() {
	// why do we initialize rand in main?
	srand(time(NULL));
	int i;
	for (i=0; i<5; i++){
		drawCard();
		getCard();
		printf("\n");
	}
	return 0;
}
