/* Drew French */

/* Takes an employee
 * array and outputs
 * a table of their
 * names, positions,
 * and salaries.
 */

#include <stdio.h>
#include <string.h>

struct empl
{
	char name1[14];
	char position1[11];
	float salary1;
	char name2[14];
	char position2[11];
	float salary2;
	char name3[14];
	char position3[11];
	float salary3;
	char name4[14];
	char position4[11];
	float salary4;
	char name5[14];
	char position5[11];
	float salary5;
};

/* How would we
 * use an array?
 */

void output(char *name1, char *position1, float salary1, char *name2, char *position2, float salary2, char *name3, char *position3, float salary3, char *name4, char *position4, float salary4, char *name5, char *position5, float salary5)
{
	printf("Name            Position     Salary   \n======================================\n%s   %s   $%.2f\n%s   %s   $%.2f\n%s   %s   $%.2f\n%s   %s   $%.2f\n%s   %s   $%.2f\n", name1, position1, salary1, name2, position2, salary2, name3, position3, salary3, name4, position4, salary4, name5, position5, salary5);

	return;
}

int main()
{
	struct empl e;
	strcpy(e.name1, "Robert Hu    ");
	strcpy(e.position1, "Manager   ");
	e.salary1 = 9000.01;
	strcpy(e.name2, "John Lastname");
	strcpy(e.position2, "Secretary ");
	e.salary2 = 8000.00;
	strcpy(e.name3, "Tom Something");
	strcpy(e.position3, "Accountant");
	e.salary3 = 7777.77;
	strcpy(e.name4, "Derpy Derp   ");
	strcpy(e.position4, "Salesman  ");
	e.salary4 = 4321.23;
	strcpy(e.name5, "Eric Chen    ");
	strcpy(e.position5, "Salesman  ");
	e.salary5 = 2012.01;
	
	output(e.name1, e.position1, e.salary1, e.name2, e.position2, e.salary2, e.name3, e.position3, e.salary3, e.name4, e.position4, e.salary4, e.name5, e.position5, e.salary5);

	return 0;
}