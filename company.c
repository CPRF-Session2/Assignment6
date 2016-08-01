/* Jared Wasserman -- company.c */
/*This program prints out the information of the 5 employee for the company.*/
#include <stdio.h>

	typedef struct{
		char name[100];
		char position[100];
		float salary;
	}employee;

	void output(employee arr[], int size){
		printf("Name            Position        Salary\n");
		printf("--------------------------------------------\n");

		int i;
		for(i=0;i<size;i++){
			employee ce = arr[i];
			printf("%s\t%-10s\t$%.2f\n",ce.name,ce.position,ce.salary);
		}

	}

int main(){

	employee e1 = {"John Smith","Manager",3000.25};
	employee e2 = {"Angela Lee","Accountant",2270.00};
	employee e3 = {"Bob White","CEO",500000.66};
	employee e4 = {"Marry Hay","Secretary",1340.20};
	employee e5 = {"Ray Archer","Sales Rep",600.00};

	employee arr[5]={e1,e2,e3,e4,e5};

	output(arr,5);

	return 0;
}
