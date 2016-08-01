#include <stdio.h>

typedef struct {
	char name[100];
	char position[100];
	float salary;
} Employee;

void output(Employee a[], int size){
	printf("Name\t\tPosition\tSalary\n");
	printf("------------------------------------------\n");
	for(int i = 0; i<size; i++){
		printf("%s\t", a[i].name);
		printf("%s\t", a[i].position);
		printf("$%.2f\n", a[i].salary);
	}
}

int main(){
	
	
	Employee one = {"John Williams", "Manager One", 2000};
	Employee two = {"Ava Smith", "Accountant", 3000};
	Employee three = {"Willy Jones", "Manager Two", 2500};
	Employee four = {"Isaac Miller", "President", 2600};
	Employee five = {"Charlie Thomas", "Manager Three", 2400};
	Employee arr[] = {one, two, three, four, five};
	output(arr, 5);

	return 0;
}
