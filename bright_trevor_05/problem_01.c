//Trevor Bright
//CECS 130-02
//Assignment 05

#include <stdio.h>

int main()
{
	int i, j, a, input, iArray[10];
	
	printf("Enter values: ");
	
	for (i = 0; i < 9; i++)
	{
		scanf("%d",&input);
		iArray[i] = input;
	}
	printf("Check this out now its in order. \n");
	for (i = 0; i < 9; ++i)
    {
        for (j = i + 1; j < 9; ++j)
        {
            if (iArray[i] > iArray[j])
            {
                a =  iArray[i];
                iArray[i] = iArray[j];
                iArray[j] = a;
            }
        }
    }
    for (i = 0; i < 9; ++i)
    {
    	printf("%d\n",iArray[i]);
	}
}
