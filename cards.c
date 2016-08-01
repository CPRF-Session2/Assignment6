/* Jared Wasserman -- cards.c */
/*This program random chooses 5 cards and prints them out. It uses structs and enums.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
	
	struct card{
		int card;
		int suit;
	};

	enum suits {HEARTS,SPADES,CLUBS,DIAMONDS};

	struct card drawCard(){
		struct card drawnCard={(rand()%13+1),(rand()%4)};	
		return drawnCard;
	}

	void getSuit(struct card pickedcard){
		if(pickedcard.suit==HEARTS){
			printf("hearts\n");
		}else if(pickedcard.suit==SPADES){
			printf("spades\n");
		}else if(pickedcard.suit==CLUBS){
			printf("clubs\n");
		}else if(pickedcard.suit==DIAMONDS){
			printf("diamonds\n");
		}
	}
	
	void printCard(struct card pickedcard){
		int x = pickedcard.card;
		switch(x){
			case 1:
			printf("\tAce of ");
			break;
			
			case 11:
			printf("\tJack of ");
			break;

			case 12:
			printf("\tQueen of ");
			break;

			case 13:
			printf("\tKing of ");
			break;

			default: 
			printf("\t%d of ",x);	
		}
	}

int main(){
	
	srand(time(NULL));
	printf("Drawn Cards:\n");
	
	struct card c1=drawCard();
	printCard(c1);getSuit(c1);
	
	struct card c2=drawCard();
	printCard(c2);getSuit(c2);
	
	struct card c3=drawCard();
	printCard(c3);getSuit(c3);
	
	struct card c4=drawCard();
	printCard(c4);getSuit(c4);
	
	struct card c5=drawCard();
	printCard(c5);getSuit(c5);

	return 0;
}
