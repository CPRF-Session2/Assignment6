#include <stdio.h>
#include <string.h>

struct employee{
	char name[100];
	char position[100];	
	int salary;};

int main(){

	struct employee employee[5];
	strcpy(employee[1].name, "C. Tatum");
	strcpy(employee[1].position, "Dancer");
	employee[1].salary=125000;
	strcpy(employee[2].name, "J. Sunley");
	strcpy(employee[2].position, "Actor");
	employee[2].salary=100000;
	strcpy(employee[3].name, "R. Rooney");
	strcpy(employee[3].position, "Soccer star");
	employee[3].salary=90000;
	strcpy(employee[4].name, "C. Turnbull");
	strcpy(employee[4].position, "Swimmer");
	employee[4].salary=95000;
	strcpy(employee[5].name, "M. Chambers");
	strcpy(employee[5].position, "Runner");
	employee[5].salary=80000;
	
	int output(){
        	int x;
        	printf("Name                            Position                          Salary\n");
        	printf("------------------------------------------------------------------------\n");
        	for (x=1;x<=5;x++){
                	printf("%s%30s%30d\n",employee[x].name,employee[x].position,employee[x].salary);
                }}

	output();
return 0;
}
