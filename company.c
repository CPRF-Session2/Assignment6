#include <stdio.h>
#include <string.h>

typedef struct employee {
	char name[100];
	char pos[100];
	char pay[100];
} emp;

void print(struct employee boy) {
	printf("%-15s %-15s %-15s\n", boy.name, boy.pos, boy.pay);
}


int main () {
	emp e1, e2, e3, e4, e5, top;
	strcpy(e1.name, "Coke");
	strcpy(e2.name, "Pepsi");
	strcpy(e3.name, "Baja Blast");
	strcpy(e4.name, "Dr. Pepper");
	strcpy(e5.name, "Mtn. Dew");
	strcpy(e1.pos, "CEO");
	strcpy(e2.pos, "Secretary");
	strcpy(e3.pos, "Janitor");
	strcpy(e4.pos, "Servant");
	strcpy(e5.pos, "Butler");
	strcpy(e1.pay, "1.00");
	strcpy(e2.pay, "2.00");
	strcpy(e3.pay, "3.00");
	strcpy(e4.pay, "4.00");
	strcpy(e5.pay, "5.00");
	strcpy(top.name, "Name");
	strcpy(top.pos, "Position");
	strcpy(top.pay, "Salary");
	print(top);
	printf("----------------------------------------------\n");
	print(e1);
	print(e2);
	print(e3);
	print(e4);
	print(e5);
	return 0;
}

