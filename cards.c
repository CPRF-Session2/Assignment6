#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum suits {clubs, diamonds, hearts, spades};
enum value;

int randNum(){
	int num; 
	num = rand();
	return num;
}
struct cards {
	int value;
	int suits;
};

void drawCard (int r){
	if (r==0) 
		r++;
	if (r<11&&r>1)
		printf("\t%d of ", r);
	if (r==1)
		printf ("\tace of ");
	else if (r==11)
		printf("\tjack of ");
	else if (r==12)
		printf("\tqueen of ");
	else if (r==13)
		printf("\tking of ");
	
}
void getSuit(int r){
	
	if (r==0)
		printf("clubs\n");

	else if (r==1)
		printf("diamonds\n");

	else if (r==2)
		printf("hearts\n");
	else if (r==3)
		printf("spades\n");
}
int main (){
	int r;
	int i;
	int x;
	srand(time(NULL)); 	/*(???) Randomizing a new number, but numbers are the same. Same card is printed.*/
	printf("Drawn cards:\n");
	for (i=0;i<5;i++){
		r=randNum()%13;
		drawCard(r);
		x=randNum()%4;	
		getSuit(x);
		}
	return 0;
}
