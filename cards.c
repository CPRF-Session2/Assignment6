#include <stdio.h>
#include <stdlib.h>

struct Cards {
	enum suits {Hearts = 1, Spades, Clubs, Diamonds};
	enum suits mySuit;
	int num;
	char suitor[];
};

int getSuit(struct Cards card[7]) {
	printf("Drawn Cards:\n");
	printf("	%s of %s\n",array[index][6],card[i].suitor[]);
	
return 0;
}

int drawCard (struct Cards card[7]) {
	int stdr;
	int i;
	int index;
	int call2;
	/* int stdr represents a suit determiner. */
	for(i=1;i<=5;i++) {
	
	stdr =  rand() % 4 + 1;
	
	if(stdr == 1) {
	enum suits mySuit = Hearts;
	}

	if(stdr == 2) (
	enum suits mySuit = Spades;
	}

	if(stdr == 3) {
	enum suits mySuit = Clubs;
	}

	if(stdr == 4) {
	enum suits mySuit = Diamonds;
	}
	if(enum suits mySuit = Hearts) {
		struct Cards card[i].suitor[] = {'H','e','a','r','t','s','\0'};
		}
	if(enum suits mySuit = Spades) {
		struct Cards card[i].suitor[] = {'S','p','a','d','e','s','\0'};
		}
	if(enum suits mySuit = Clubs) {
		struct Cards card[i].suitor[] = {'C','l','u','b','s','\0'};
		}
	if(enum suits mySuit = Diamonds) {
		struct Cards card[i].suitor[] = {'D','i','a','m','o','n','d','s','\0'};
	}
		index = rand() % 13 + 1;

		array[index][6];

		call2 = getSuit(Cards card[7]);
}
		
return 0;
}		



int main() {
	int call;
	int idx;
	int number;
	char value;
	struct Cards card[7];
	call = drawCard(struct Cards card[7]);	
	srand(time(NULL));
	number = rand() % 13 + 1;
	if(number == 1) {
		value = {'A','c','e'};
	}
	if(number == 2) {
		value = {'2'};
		}
	if(number == 3) {
		value = {'3'};
	}
	if(number == 4) {
		value = {'4'};
	}
	if(number == 5) {
		value = {'5'};
	}
	if(number == 6) {
		value = {'6'};
	}


	
return 0;
}
