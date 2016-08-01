/*Jinoo Hong*/
/*Write a program `company.c` that implements an employee structure containing a name, position, and a salary.  Create an array of 5 employees in your main function, each with a different name and salary.  Write a function output() that takes an employee array and prints out the array of employees in the following format:
  ```	
  Name		  	Position	  	Salary
  -------------------------------------------- 
  John Smith		Manager	    		$3000.25 
  Angela Lee		Accountant		$2270.00*/

#include <stdio.h>

typedef struct employee {
	char name[100];
	char position [50];
	float salary;
}emp;

void printing(emp employee){
	printf("%s\t\t\t%s\t\t\t%.2f\n", employee.name, employee.position, employee.salary);
}

int main() {
	printf("Name\t\t\t\tPosition\t\tSalary\n");
	emp A = {"John Smith", "Manager", 3000.25};
	emp B = {"Angela Lee", "Counter", 2270.00};
	emp C = {"Jack Smith", "Janitor", 5.99};
	emp D = {"Josh Smith", "Boogy", 8.99};
	emp E = {"Sea Gull", "Trasher", 15.00};
	printing(A);
	printing(B);
	printing(C);
	printing(D);
	printing(E);
	return 0;
}
