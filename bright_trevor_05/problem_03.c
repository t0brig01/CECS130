//Trevor Bright
//CECS 130-02
//Assignment 05

#include <stdio.h>

int main()
{
	int *iPtr;
	char *cPtr;
	float *fFloat;
	
	int iNumber;
	float fNumber;
	char cNumber;
	
	iPtr = &iNumber;
	cPtr = &cNumber;
	fFloat = &fNumber;
	
	printf("Value of iNumber: %d\n", iNumber);
	printf("Value of fNumber: %d\n", fNumber);
	printf("Value of cNumber: %d\n\n", cNumber);
	
	printf("Value of iPtr: %d\n", iPtr);
	printf("Value of cPtr: %d\n", cPtr);
	printf("Value of fFloat: %d\n\n", fFloat);
	
	printf("Address of iNumber: %x\n", &iNumber);
	printf("Address of fNumber: %x\n", &fNumber);
	printf("Address of cNumber: %x\n\n", &cNumber);
	
	printf("Address of iPtr: %x\n", *iPtr );
	printf("Address of cPtr: %x\n", *cPtr );
	printf("Address of fFloat: %x\n", *fFloat );
	
}
