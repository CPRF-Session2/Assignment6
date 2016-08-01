#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

enum suits{"of spades","of hearts","of diamonds","of clubs"};

struct cards{
	int number;
	char suits;
	};

int drawcard(){
	struct cards c1[52];
	int i=1,x,y;
	for (x=1;x<=4;x++){
		for(y=1;y<=13;y++){
			c1[i].number=y;
			c1[i].suits=x;
			i++;}}
int getsuit(){
	int i2;
	char suit[10];
	char numb[10];
	srand(time(NULL));
	for(i2=1;i2<=5;i2++){
		int num=rand()%52;
		if (c1[num].number==1){
			strcpy(numb,"Ace");}
		else if (c1[num].number==11){
			strcpy(numb,"Jack");}
		else if (c1[num].number==12){
			strcpy(numb,"Queen");}
		else if (c1[num].number==13){
			strcpy(numb,"King");}
		else {
			strcpy(numb,c1[num].number);}

		if (c1[num].suits==1){
			strcpy(suit,"of spades");}
		if (c1[num].suits==2){
			strcpy(suit,"of hearts");}
		if (c1[num].suits==3){
			strcpy(suit,"of diamonds");}
		if (c1[num].suits==4){
			strcpy(suit,"of clubs");}
			
	
		printf("%s%s\n",numb,suit);}}

int main(){
	drawcard();
	getsuit();
return 0;
}
