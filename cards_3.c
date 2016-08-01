#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
struct cards {
	char suits;
	int values;
	};
int main(){
	int x, y, cnt, z, cards_array[5];
	char st1[10], st2[10];
	enum suits {spades, clubs, diamonds, hearts};
	struct cards c1[52];
	for (y = 0; y <= 3; y++){
		for (x = 0; x <= 12; x++){
			cnt = y * 12 + x;
			c1[cnt].suits = y;
			c1[cnt].values = x;
		}}
	srand(time(NULL));
	for (z = 0; z < 5; z++){
		/*srand(time(NULL));*/
		int card_number = rand() %52;
		if (c1[card_number].suits == 0)
			strcpy(st1, "spades");
		if (c1[card_number].suits == 1)
			strcpy(st1, "clubs");
		if (c1[card_number].suits == 2)
			strcpy(st1, "diamonds");
		if (c1[card_number].suits == 3)
			strcpy(st1, "hearts");

		if (c1[card_number].values == 9)
			strcpy(st2, "jack");
		else if(c1[card_number].values == 10)
			strcpy(st2, "queen");
		else if(c1[card_number].values == 11)
			strcpy(st2, "king");
		else if(c1[card_number].values == 12)
			strcpy(st2, "ace");
		else
			sprintf(st2, "%d", c1[card_number].values + 2);

		cards_array[z] = card_number;
	
		printf ("%s of %s\n", st2, st1);
		}
return 0;
}


