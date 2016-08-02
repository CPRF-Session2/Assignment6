/*Priyanka Musti*/
/*Write a program company.c that implements an employee structure containing a name, position, and a salary. Create an array of 5 employees in your main function, each with a different name and salary. Write a function output() that takes an employee array and prints out the array of employees*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct employee
{
	char name [100];
	char position[100];
	long int salary;
	
};
int main()
{
	int x;
	struct employee ploy[5];
	strcpy(ploy[0].name, "Taylor Swift");
	strcpy(ploy[0].position, "Journalist");
	ploy[0].salary= 45000;


	strcpy(ploy[1].name, "Selena Gomez");
	strcpy(ploy[1].position, "Secretary");
	ploy[1].salary= 25000;

	strcpy(ploy[2].name, "Will Smith");
	strcpy(ploy[2].position, "CEO");
	ploy[2].salary= 4000000;

	strcpy(ploy[3].name, "Wiz Khalifa");
	strcpy(ploy[3].position, "Vice President");
	ploy[3].salary= 10000000;

	strcpy(ploy[4].name, "Donald Trump");
	strcpy(ploy[4].position, "Assistant Janitor");
	ploy[4].salary= 5;

	printf("Name             Position             Salary\n");
	printf("--------------------------------------------\n");
	for(x=0;x<=4;x++)
	{
	printf("%s\t             %s\t                  %li\n", ploy[x].name, ploy[x].position, ploy[x].salary);
	}
	return 0;
}
