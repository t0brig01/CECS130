//Trevor Bright
//CECS 130-02
//Assignment 7	

#include<stdio.h>
#include<stdlib.h>

struct Employee{
	char *id;
	float salary;
};


int main()
{
	int i;
	struct Employee *employeeArray;
	int employeeCount = 3;
	int raise;
	
	employeeArray =  (struct Employee *)malloc(employeeCount*sizeof(struct Employee));
	
	if (employeeArray != NULL)
	{
		employeeArray[0].id = "John01";
		employeeArray[1].id = "John11";
		employeeArray[2].id = "John22";
		employeeArray[0].salary = 1000;
		employeeArray[1].salary = 1100;
		employeeArray[2].salary = 2200;
	}
	
	
	for (i = 0; i < employeeCount; i++)
	{
		printf("Employee ID: %s\n",employeeArray[i].id);
		printf("Employee Salary: %f\n",employeeArray[i].salary);
	}
	printf("Would you like to give a 10 percent raise to each employee? (1 YES/2 NO)\n");
	scanf("%d",&raise);
	switch (raise){
		case 1:
			for (i = 0; i < employeeCount; i++)
			{
				employeeArray[i].salary = employeeArray[i].salary*1.1;
			}
			for (i = 0; i < employeeCount; i++)
			{
				printf("Employee ID: %s\n",employeeArray[i].id);
				printf("Employee Salary: %f\n",employeeArray[i].salary);
			}
			return 0;
			break;
		case 2:
			printf("Goodbye!");
			return 0;
	}	
}
