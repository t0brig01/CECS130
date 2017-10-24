//Trevor Bright
//CECS 130-02
//Assignment 05

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, gpa[30];
	float total, input, sum;
	int yon;

	for (i = 1; i < 31; i++)
	{
		printf("GPA: ");
		scanf("%f",&input);
		gpa[i] = input;
		sum += input;
		printf("Would you like to average now? (1 yes or 2.no)\n");
		scanf("%d", &yon);
		switch(yon)
		{
		case 1:	{
				total = sum/i;
				printf("Average GPA: %f  ",total);
				return 0;
				}
		case 2:
				{
				break;
				}		
		}
	}
	}
