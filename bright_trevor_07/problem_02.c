//Trevor Bright
//CECS 130-02
//Assignment 07

#include<stdio.h>
#include<stdlib.h>


char songBuff[132];

int main()
{
	loadMySongsList("songlist.txt");
}

void loadMySongsList(char *fileName){
	FILE *fp;
	int j = 1;
	fp = fopen(fileName,"r");
	if (fp !=NULL)
	{
		printf("File %s successfully opened.\n", fileName);
		while (!feof(fp))
		{
			fgets(songBuff,132,fp);
			printf("Song: %d: %s",j,songBuff);
			j++;
		}
		fclose(fp);
	}
	else
	{
		printf("File %s failed to open.\n", fileName);
	}
}
