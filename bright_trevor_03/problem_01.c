//Trevor Bright
//CECS 130-02
//Assignment 03

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
	srand(time(NULL));
	int input;
	int rando = rand() % 10 + 1;
	
	printf("Guess the number from 1-10.\n");
	printf("%d\n", rando);
	scanf("%d", &input);
	
	if ( isdigit(input) != rando)
	{
		if (rando == input)
		{
			printf("Well done! You guessed correctly.");
		}
		else
		{
			printf("You guessed wrong. The number was %d.", rando);
		}
	}
	else
	{
		printf("The character you entered is not a number.");
	}
	return 0;
	
}
