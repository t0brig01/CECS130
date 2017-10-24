//Trevor Bright
//CECS 130-02
//Assignment 05

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, i, randomnumber, sum;
	int iArray [6];
	
	printf("How many dice would you like to roll? (1-6)\n");
	scanf("%d",&input);
	
	switch(input){
		case 1:
			for (i = 1; i < 2; i++)
			{
				randomnumber = rand() % 6;
				iArray[i]=randomnumber;
				sum += randomnumber;
				printf("Dice %d: %d\n",i,randomnumber);
			}
			sum = sum-1;
			printf("Roll: %d",sum);
			break;
		case 2:
			for (i = 1; i < 3; i++)
			{
				randomnumber = rand() % 6;
				iArray[i]=randomnumber;
				sum += randomnumber;
				printf("Dice %d: %d\n",i,randomnumber);
			}
			sum = sum-1;
			printf("Roll: %d",sum);
			break;
		case 3:
			for (i = 1; i < 4; i++)
			{
				randomnumber = rand() % 6;
				iArray[i]=randomnumber;
				sum += randomnumber;
				printf("Dice %d: %d\n",i,randomnumber);
			}
			sum = sum-1;
			printf("Roll: %d",sum);
			break;
		case 4:
			for (i = 1; i < 5; i++)
			{
				randomnumber = rand() % 6;
				iArray[i]=randomnumber;
				sum += randomnumber;
				printf("Dice %d: %d\n",i,randomnumber);
			}
			sum = sum-1;
			printf("Roll: %d",sum);
			break;
		case 5:
			for (i = 1; i < 6; i++)
			{
				randomnumber = rand() % 6;
				iArray[i]=randomnumber;
				sum += randomnumber;
				printf("Dice %d: %d\n",i,randomnumber);
			}
			sum = sum-1;
			printf("Roll: %d",sum);
			break;
		case 6:
			for (i = 1; i < 7; i++)
			{
				randomnumber = rand() % 6;
				iArray[i]=randomnumber;
				sum += randomnumber;
				printf("Dice %d: %d\n",i,randomnumber);
			}
			sum = sum-1;
			printf("Roll: %d",sum);
			break;
	}
		
}
