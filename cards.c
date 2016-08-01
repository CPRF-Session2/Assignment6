/* Drew French */

/* Draws a random card
 * and prints the name
 * and suit properly.
 */

 /* Didn't remember to use
  * structs & enums for this
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int s;

int drawCard();
void getSuit(int);

int main()
{
	int i;
	for(i = 0; i < 5; i++)
	{
		srand(time(NULL));
		getSuit(drawCard());
		int j;	/* These loops are here as a delay so rand() doesn't output the same thing 5 times. */
		int k;
		for(j = 0; j < (10000 + 5000 * i + ((rand() % 10 + 1) * 1000)); j++)
			for(k = 0; k < (10000 + 5000 * i + ((rand() % 10 + 1) * 1000)); k++)
			{}
	}
	
	return 0;
}

int drawCard()
{
	int card = rand() % 13 + 2;
	s = rand() % 4 + 1;
	return card;
}

void getSuit(card)
{
	if(card <= 10)
	{
		switch(s)
		{
			case 1: printf("%d of hearts\n", card);
			break;

			case 2: printf("%d of diamonds\n", card);
			break;

			case 3: printf("%d of clubs\n", card);
			break;

			case 4: printf("%d of spades\n", card);
			break;
		}
	}

	if(card == 11)
	{
		switch(s)
		{
			case 1: printf("Jack of hearts\n");
			break;

			case 2: printf("Jack of diamonds\n");
			break;

			case 3: printf("Jack of clubs\n");
			break;

			case 4: printf("Jack of spades\n");
			break;
		}
	}

	if(card == 12)
	{
		switch(s)
		{
			case 1: printf("Queen of hearts\n");
			break;

			case 2: printf("Queen of diamonds\n");
			break;

			case 3: printf("Queen of clubs\n");
			break;

			case 4: printf("Queen of spades\n");
			break;
		}
	}

	if(card == 13)
	{
		switch(s)
		{
			case 1: printf("King of hearts\n");
			break;

			case 2: printf("King of diamonds\n");
			break;

			case 3: printf("King of clubs\n");
			break;

			case 4: printf("King of spades\n");
			break;
		}
	}

	if(card == 14)
	{
		switch(s)
		{
			case 1: printf("Ace of hearts\n");
			break;

			case 2: printf("Ace of diamonds\n");
			break;

			case 3: printf("Ace of clubs\n");
			break;

			case 4: printf("Ace of spades\n");
			break;
		}
	}
}
