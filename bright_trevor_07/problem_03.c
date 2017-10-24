//Trevor Bright
//CECS 130-02
//Assignment 07

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char *fileName = "myBooksList.txt";
	fp = fopen(fileName, "w");
	if (fp != NULL)
	{
		printf("File %s successfully opened.\n",fileName);
		fprintf(fp,"The Catcher in the Rye by J.D. Salinger\n");
		fprintf(fp,"Pride and Prejudice by Jane Austen\n");
		fclose(fp);
	}
	else
	{
		printf("File %s failed to open.\n",fileName);
	}
}
