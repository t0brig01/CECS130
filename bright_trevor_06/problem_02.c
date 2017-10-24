//Trevor Bright
//CECS 130-02
//Assignment 6

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char *a[] = {"result","dismal","fees"};

	for(i = 0; i< 3; i++)
	{
		printf("%s\n",a[i]);
	}
	printf("\n");
	findMin(a,3);
}

int findMin(char *a[], int size)
{
	int i;
	char *t[] = {a[0]};
	
	for (i = 0; i < size; i++)
	{
		if (strcmp(a[i],t[0]) < 0)
		{
			t[0] = a[i];
		}
	}
	printf("\"Smallest\" string: %s",t[0]);
}
