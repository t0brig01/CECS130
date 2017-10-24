//Trevor Bright
//CECS 130-02
//Assignment 03

#include <stdio.h>
#include <stdlib.h>

int main()
{
	divide();
	compare();
	menu();
}

int divide(void)
{
	int n1 = 100;
	int n2 = 10;
	int total;
	
	total = n1/n2;
	
	printf("Number 1 / number 2 = %d\n",total);
}

int compare (void)
{
	int n1 = 10;
	int n2 = 100;
	
	if (n1>n2)
	{
		printf("Number 1 is larger\n\n");
	}
	else
	{
		printf("Number 2 is larger\n\n");
	}
}
int menu (void)
{
	printf("1. Withdraw\n");
	printf("2. Deposit\n");
	printf("3. Check Balance\n");
	printf("4. Exit\n");
}

