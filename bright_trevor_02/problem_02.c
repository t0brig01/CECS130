//Trevor Bright
//CECS 130-02
//Assignment 02

#include<stdio.h>

int main()
{
	int a,b,x,y,f;
	
	printf("a = ");
	scanf("%d",&a);
	
	printf("b = ");
	scanf("%d",&b);
	
	printf("x = ");
	scanf("%d",&x);
	
	printf("y = ");
	scanf("%d",&y);
	
	f= (a-b)*(x-y);
	
	printf("The answer is %d",f);
	return 0;	
}
