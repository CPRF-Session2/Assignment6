#include <stdio.h>

typedef struct {
	char name[100];
	char position[100];
	int salary;
	} employee; 
void output (employee e) {
	int i;
	printf("%s\t",e.name);
	printf("%s\t", e.position);
	printf("%d\n", e.salary);
}

int main(){
	struct company; 
	printf("Name \t\t Postition \t Salary\n-----------------------------------\n");
	employee emp0= {"Mike Smith   ", "Employee", 250000};
	employee emp1= {"Clara Rose", "Manager\t", 140000};
	employee emp2= {"Sam Frank   ", "Vice Pres", 110943};
	employee emp3= {"John Juice", "Manager\t", 123234};
	employee emp4= {"Carole King  ", "President", 654367};
	
	employee arr[5] = {emp0, emp1, emp2, emp3, emp4};

	for(int i= 0; i<5; i++){
		output(arr[i]);
	}

	return 0;
}
