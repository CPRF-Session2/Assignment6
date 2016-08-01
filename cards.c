//Matthew Kellerman- prints out five random cards with suits, I commented out the code I tried to use originally for the enums and structs.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//struct cards{
//int number;
//enum {hearts, diamonds, spades, clubs,} suits;


//};

 
//enum name {hearts, diamonds, spades, clubs,};


//int drawCard(int random, int arr2[4]){
//srand(time(NULL));

//	  arr2[4];
//	for(int i=0;i<4;i++){
//	arr2[1]=rand()%3+0;
//	  arr2[0]=rand()%3+0;
	//arr2[i] = sizeof(enum name[arr2[i]]);
	 
         

//		struct cards value = {random, arr2[4]};
			

//return sizeof(struct cards);
//}

//is passed two random numbers
void getsuit(int random, int arr){
if(random == 11){
	switch(arr)
	{
	case 4:
	printf("Jack of Diamonds\n");
	break;
	case 1:
	printf("Jack of Clubs\n");
	break;
	case 2:
	printf("Jack of Hearts\n");
	break;
	case 3:
	printf("Jack of Spades\n");
	break;
	}                              
}
if(random == 12){
	 

switch(arr)
	  {
 case 4:
    printf("Queen of Diamonds\n");
     break;
   case 1:
  printf("Queen of Clubs\n");
 break;
  case 2:
  printf("Queen of Hearts\n");
  break;
  case 3:
 printf("Queen of Spades\n");
 break;
 }                          

}  
	 if(random == 13){
	  switch(arr)
		    {
 case 4:
 printf("King of Diamonds\n");
  break;
 case 1:
printf("King of Clubs\n");
   break;
 case 2:
 printf("King of Hearts\n");
 break;
	 case 3:
	 printf("King of Spades\n");
	  break;
	   }                          
	  
	 }  
		  if(random == 14){
		  switch(arr)
			    {
   case 4:
 printf("Ace of Diamonds\n");
 break;
 case 1:
 printf("Ace of Clubs\n");
   break;
     case 2:
   printf("Ace of Hearts\n");
   break;
  case 3:					
   printf("Ace of Spades\n");
	break;
     }                          

	}	
if(random < 11)  {

  switch(arr)
	    {
  case 4:
   printf("%d of Diamonds\n",random);
 break;
 case 1:
printf("%d of Clubs\n",random);
 break;
case 2:
 printf("%d of Hearts\n",random);
break;
 case 3:
 printf("%d of Spades\n",random);
 break;
    }                          

}




}

int main()
{
srand(time(NULL));
int arr;
arr= (rand()%4)+1;//between 0 and 3
int x = (rand()%14)+2;//between 2 and 14

printf("Drawn Cards:\n");
printf("\n");
for(int i=0;i<5;i++){
//	calls fuction 5 times
//drawCard(x,arr);
getsuit(x,arr);
printf("%d\n",arr);
//randomizes values again
 x = (rand()%14)+2;
arr= (rand()%4)+1;

}
return 0;
}

