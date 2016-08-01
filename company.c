#include <stdio.h>
#include <string.h>

struct employees {
	char name[5][30];
	char position[5][25];
	int salary[5];
} idk;

int output(struct employees idk,char name[5][30], char position[5][25], int salary[5]) {
	char nombre[5] = {'N','a','m','e','\0'};
	char pusicion[9] = {'P','o','s','i','t', 'i', 'o', 'n', '\0'};
	char dinero[7] = {'S','a','l','a','r','y','\0'};
	printf("%15s      %15s    %6s", nombre, pusicion, dinero);
	printf("----------------------------------------------");
	printf("%15s      %15s    %6s",name[1],position[1],salary[1]);
	printf("%15s      %15s    %6s",name[2],position[2],salary[2]);
	printf("%15s      %15s    %6s",name[3],position[3],salary[3]);
	printf("%15s      %15s    %6s",name[4],position[4],salary[4]);
	printf("%15s      %15s    %6s",name[5],position[5],salary[5]);

return 0;
}

int main(struct employees idk) {
	int call;
	char name[5][30];
	char position[5][25];
	int salary[5];
	name[5][30] = {"Squeak E. Clean","Ash Ketchum","Peeka Choo","Unsuspecting Shoebox","Failed Algebra"};
	position[5][25] = {"Janitor","President","Vice President","Receptionist","Marketing Manager"};
	salary[5] = {500000,10,750000,1000000,1000001};
	
	call = output(struct employees idk,name[5][30],position[5][25],salary[5]);

return 0;
}

