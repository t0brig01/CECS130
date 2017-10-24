//Trevor Bright
//CECS 130-02
//Assignment 03

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int rollt,rolla,rollb;
	rolla = rand() % 6 + 1;
	rollb = rand() % 6 + 1;
	rollt = rolla + rollb;
	
	printf("Die 1 = %d\n",rolla);
	printf("Die 2 = %d\n\n",rollb);	
	printf("Total = %d\n",rollt);
	
	if (rollt == 7 || rollt == 11)
	{
		printf("Player wins");
	}
	else
	{
		printf("Player loses. Thanks for playing!");
	}
	return 0;
}
