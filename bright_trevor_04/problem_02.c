//Trevor Bright
//CECS 130-02
//Assignment 03

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s,e,i;
	
	printf("Starting number = ");
	scanf("%d",&s);
	
	printf("Ending number = ");
	scanf("%d",&e);
	
	printf("Interval = ");
	scanf("%d",&i);
	
	for (s = s; s < e; s = s + 1)
	{
		if (s % i == 0)
		{
			printf("%d\n",s);
		}
	}
}
