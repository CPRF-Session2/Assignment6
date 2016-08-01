/* Mariposa Lee, drawing 5 random cards, incomplete. I started over twice, but at the end I couldn't figure it out. Tried in enums first, but then got confused, so I tried to do it with strings...*/

#include <stdio.h>
#include <string.h>

enum suits {hearts, diamonds, spades, clubs};
enum values {two, three, four, five, six, seven, eight, nine, ten, Queen, Joker, King, Ace};
struct Cards {
	enum values value;
	enum suits suit;
};
/*
char s1[4]= "hearts", "diamonds", "spades", "clubs";
char s2[13]= "2", "3", "4", "5", "6", "7", "8", "9", "10", "Queen", "Joker", "King", "Ace";
*/

typedef struct card Cards;


drawCard(int values) {
int s;
s=srand()%13;  
}

getSuit(int values){
int l;
l=srand()%4; 
}

int main () {
int q, w;
char values, suits;
q = drawCard(values);
w= getSuit(suits);

printf("%d of %s", q, w);

return 0;
}
