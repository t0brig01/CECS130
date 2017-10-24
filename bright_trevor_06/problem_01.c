//Trevor Bright
//CECS 130-02
//Assignment 06

#include <stdio.h>
#include <string.h>

const char *quote =  "The results were dismal - really dismal. The fees charged were astronomical fees.";
const char *wordR = "result";
const char *wordD = "dismal";
const char *wordF = "fees";
	
char *ret;

int wordR_find(quote,wordR)
	{
		int i = 0;
		const char *p = quote;
		
		while((p=strstr(p,wordR)) != NULL)
		{
			p += strlen(wordR);
			i++;
		}
		
		printf("%d occurances of %s\n",i, wordR);
	}

int wordD_find(quote,wordD)
	{
		int i = 0;
		const char *p = quote;
		
		while((p=strstr(p,wordD)) != NULL)
		{
			p += strlen(wordD);
			i++;
		}
		
		printf("%d occurances of %s\n",i, wordD);
	}

int wordF_find(quote,wordF)
	{
		int i = 0;
		const char *p = quote;
		
		while((p=strstr(p,wordF)) != NULL)
		{
			p += strlen(wordF);
			i++;
		}
		
		printf("%d occurances of %s\n",i, wordF);
	}

int main()
{
	printf("Quote: %s\n",quote);
	wordR_find(quote,wordR);
	wordD_find(quote,wordD);
	wordF_find(quote,wordF);

	return 0;
}
