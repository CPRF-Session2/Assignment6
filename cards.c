#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef enum {Hearts, Spades, Clubs, Diamonds} suit;/*suits for cards*/

typedef struct{
	char value[10];
	suit s;
} Card;

Card drawCard(int rRal, int sRal){
	char valuePos [][100] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};/*creates values in char form*/	
	int valRan = rRal; /*creates random int {0,13)*/
	int suitRan = sRal; /*creates random int {0,4)*/
	suit suitX = Hearts + suitRan;
	char val[100];
	strcpy(val, valuePos[valRan]);
	Card c;
	strcpy(c.value, val);
	c.s=suitX;
	
	return c;
}
void getSuit(Card c){
	suit s = c.s;
	switch (s) {
		case (Hearts):
			printf("Hearts");
			break;
		case (Spades):
			printf("Spades");
			break;
		case (Clubs):
			printf("Clubs");
			break;
		case (Diamonds):
			printf("Diamonds");
			break;
	}
}

int main(){
	Card one, two, three, four, five;
	Card arr[] = {one, two, three, four, five};
	srand(time(NULL));
	int rVal, sVal;
	for(int i = 0; i<5; i++){
		rVal=rand()%13;
		sVal=rand()%4;
		arr[i]=drawCard(rVal,sVal);
	}/*draws five random cards*/
	printf("Drawn Cards: \n");
	for(int i = 0; i<5; i++){
		printf("\t%s of ", arr[i].value);
		getSuit(arr[i]);
		printf("\n");
	}
	return 0;
}

