#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int drawCard() {
	int valgen;
	char ret[100];
	valgen = rand() % 13 +1;
	return valgen;
}

int getSuit() {
	int suitgen;
	suitgen = rand() %4 +1;
	return suitgen;
}

typedef enum {Hearts, Diamonds, Spades, Clubs}suits;
typedef struct card {
	suits s;
	char value[100];
} cardv;

int main () {
	srand(time(NULL));
	cardv c1, c2, c3, c4, c5;
	int a, b, c, d, e, z, x, y, w, v;
	a = drawCard();
	b = drawCard();
	c = drawCard();
	d = drawCard();
	e = drawCard();
	z = getSuit();
	x = getSuit();
	y = getSuit();
	w = getSuit();
	v = getSuit();
	strcpy(c1.suit, z);
	printf("%d %d\n", a,z);
	printf("%d %d\n", b,x);
	printf("%d %d\n", c,y);
	printf("%d %d\n", d,w);
	printf("%d %d\n", e,v);
	return 0;

}
