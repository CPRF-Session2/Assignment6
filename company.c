#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct employee {
	char name [100];
	char position [100];
	long int salary;
	};
int main(){
	int i;
	struct employee emp[5];
	strcpy(emp[0].name, "C. Anthony");
	strcpy(emp[0].position, "Forward");
	emp[0].salary = 25000000000;
	strcpy(emp[1].name, "K. Porzingis");
	strcpy(emp[1].position, "Forward");
	emp[1].salary = 4000000000;
	strcpy(emp[2].name, "D. Rose    ");
	strcpy(emp[2].position, "Guard");
	emp[2].salary = 21000000000;
	strcpy(emp[3].name, "C. Lee     ");
	strcpy(emp[3].position, "Guard");
	emp[3].salary = 11000000000;
	strcpy(emp[4].name, "J. Noah    ");
	strcpy(emp[4].position, "Center");
	emp[4].salary = 18000000000;

	printf("Name                        Position                     Salary\n");
	printf("----------------------------------------------------------------------\n");
	for (i = 0; i <=4; i++){
	printf("%s\t            %s\t                 %li\n", emp[i].name, emp[i].position, emp[i].salary);
	}
	return 0;
	}


