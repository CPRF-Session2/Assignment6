/*Creates struct for employee information, creates 5 employees and prints them*/
#include <stdio.h>
#include <string.h>

struct Employee
{
	char name[50];
	char position[50];
	double salary;
};

void output(struct Employee empl)
{
	printf("%s \t%s \t$%.2lf\n",empl.name,empl.position,empl.salary);
}

int main()
{
	struct Employee Employee1;
	struct Employee Employee2;
	struct Employee Employee3;
	struct Employee Employee4;
	struct Employee Employee5;

	strcpy(Employee1.name, "John Smith");
	strcpy(Employee1.position, "Manager");
	Employee1.salary = 3000.25;

	strcpy(Employee2.name, "Bob Johns");
	strcpy(Employee2.position, "Accountant");
	Employee2.salary = 1000;

	strcpy(Employee3.name, "Noah Atkins");
	strcpy(Employee3.position, "Programmer");
	Employee3.salary = 2000.54;

	strcpy(Employee4.name, "Richard Mabry");
	strcpy(Employee4.position, "Marketing");
	Employee4.salary = 1654.32;

	strcpy(Employee5.name, "Alan Poe");
	strcpy(Employee5.position, "Janitor");
	Employee5.salary = 2100.34;

	printf("\nName \t\tPosition \tSalary\n");
	printf("-----------------------------------------\n");

	output(Employee1);
	output(Employee2);
	output(Employee3);
	output(Employee4);
	output(Employee5);
	
	return 0;
}
