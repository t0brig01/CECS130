//Trevor Bright
//CECS 130-02
//Assignment 02

#include<stdio.h>

int main()
{
	int commision,rate,salesPrice,cost;
	
	printf("Rate = ");
	scanf("%d",&rate);
	
	printf("Sales price = ");
	scanf("%d",&salesPrice);
	
	printf("Cost = ");
	scanf("%d",&cost);
	
	commision= rate*(salesPrice-cost);
	printf("Commision = %d",commision);
	return 0;
}
