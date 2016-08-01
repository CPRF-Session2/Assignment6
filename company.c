//Matthew Kellerman- prints out an array of 5 employees and their salary and position
//commented out old code
#include <stdio.h>

struct employee{

char name[20];
char position[20];
float salary;
};

void output (struct employee arr[5]){
	for(int i=0;i<5;i++){
	printf("\n%s\t",arr[i].name);
		printf("%s\t",arr[i].position);
		printf("$%0.2f\t",arr[i].salary);
	}
}




int main()
{
struct employee matthew = {"Mathew","Deliverer", 3045.32};
struct employee kelley = {"Kelley", "Accountant", 2270.00};
struct employee tom = {"Tim", "Engineer", 2230.82};
struct employee amanda={"Amanda", "Security Guard", 2234.64};
struct employee lesley={"Lesley", "I.T. Manager", 2236.47};

struct employee arr[5]= {matthew, kelley, tom, amanda, lesley};
printf("Name    Position         Salary");
printf("\n---------------------------------\n");
//struct employee all[5][3]={
//	matthew.name,matthew.position,matthew.salary,
//	kelley.name,kelley.position,kelley.salary,
//	tom.name,tom.position,tom.salary,
//	amanda.name,amanda.position,amanda.salary,
//	lesley.name,lesley.position,lesley.salary

//};
output(arr);
//output(all)
return 0;
}




