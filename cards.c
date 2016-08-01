/* Ashank Kumar, creates random card and prints it*/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

enum suite {Diamonds=1, Hearts, Spades, Clubs};

struct Card
{
	char num[50];
	int suite;
};

struct Card drawCard()
{
	struct Card card1;

//	srand(time(NULL));
	int r = (rand() % 13) + 1;

//	srand(time(NULL));
	int i = (rand() % 4) + 1;

	switch(i)
	{
		case 1:
		card1.suite = 1;
		break;
		case 2:
		card1.suite = 2;
		break;
		case 3:
		card1.suite = 3;
		break;
		case 4:
		card1.suite = 4;
		break;
		default:
		printf("%d",i);
	}

	switch(r)
	{
		case 1:
		strcpy(card1.num, "Ace");
		return card1;
		break;
		case 2:
		strcpy(card1.num, "Two");
		return card1;
		break;
		case 3: 
		strcpy(card1.num, "Three");
		return card1;
		break;
		case 4:
		strcpy(card1.num, "Four");
		return card1;
		break;
		case 5:
		strcpy(card1.num, "Five");
		return card1;
		break;
		case 6:
		strcpy(card1.num, "Six");
		return card1;
		break;
		case 7:
		strcpy(card1.num, "Seven");
		return card1;
		break;
		case 8:
		strcpy(card1.num, "Eight");
		return card1;
		break;
		case 9:
		strcpy(card1.num, "Nine");
		return card1;
		break;
		case 10:
		strcpy(card1.num, "Ten");
		return card1;
		break;
		case 11:
		strcpy(card1.num, "Jack");
		return card1;
		break;
		case 12:
		strcpy(card1.num, "Queen");
		return card1;
		break;
		case 13:
		strcpy(card1.num, "King");
		return card1;
		break;
		default:
		printf("%d",r);
	}
}

void getSuit(struct Card card)
{
	if(card.suite == Diamonds)
		printf("%s of Diamonds\n", card.num);
	if(card.suite == Hearts)
		printf("%s of Hearts\n", card.num);
	if(card.suite == Spades)
		printf("%s of Spades\n", card.num);
	if(card.suite == Clubs)
		printf("%s of Clubs\n", card.num);
}

int main()
{
	srand(time(NULL));
	struct Card card1;
	struct Card card2;
	struct Card card3;
	struct Card card4;
	struct Card card5;

	card1 = drawCard();
	getSuit(card1);
	card2 = drawCard();
	getSuit(card2);
	card3 = drawCard();
	getSuit(card3);
	card4 = drawCard();
	getSuit(card4);
	card5 = drawCard();
	getSuit(card5);

	return 0;
}
