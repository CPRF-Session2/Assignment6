/*Mariposa Lee, printing out information on 5 employees. Wasn't sure how to do this with employee arrays, since the only element that uses numbers is the salary, but even then you need the dollar sign... So I did it using strings in a struct. I apologize!! */

#include <stdio.h>
#include <string.h>

struct emplos {
	char name[20];
	char position[20];
	char salary[7];
} employees[4];


void output(struct emplos emplo) {
	printf("%-20s %-20s %-5s\n", emplo.name, emplo.position, emplo.salary);}


int main () {
	struct emplos guy1;
	strcpy(guy1.name, "John Doe");
	strcpy(guy1.position, "Administrator");
	strcpy(guy1.salary, "$2000");

	struct emplos guy2;
	strcpy(guy2.name, "Herecomes Datboi");
	strcpy(guy2.position, "CEO");
	strcpy(guy2.salary, "$420");

	struct emplos guy3;
	strcpy(guy3.name, "Kazo Okid");
	strcpy(guy3.position, "Manager");
	strcpy(guy3.salary, "$2001");

	struct emplos guy4;
	strcpy(guy4.name, "Dan K. Memes");
	strcpy(guy4.position, "Developer");
	strcpy(guy4.salary, "$9001");

	struct emplos guy5;
	strcpy(guy5.name, "Mister Love");
	strcpy(guy5.position, "Marketer");
	strcpy(guy5.salary, "$1");

	struct emplos title;   /*6 structs for 5 employees and title*/
	strcpy(title.name, "Name");
	strcpy(title.position, "Position");
	strcpy(title.salary, "Salary");

output(title);   
printf("-------------------------------------------------\n");
output(guy1);
output(guy2);
output(guy3);
output(guy4);
output(guy5);
return 0;
}
