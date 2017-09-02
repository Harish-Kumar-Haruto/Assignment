#include "Q4functions.h"

int countSpace(FILE *fp)
{
	int c, count = 0;
	do
	{
		c = fgetc(fp);
		if(c == 32)
		{
			count++;
		}
	}while(c != EOF);
	return count;
}

int countTab(FILE *fp)
{
	int c, count = 0;
	do
	{
		c = fgetc(fp);
		if(c == 9)
		{
			count++;
		}
	}while(c != EOF);
	return count;
}

int countChar(FILE *fp)
{
	int c, count = 0;
	while(c = fgetc(fp) && feof(fp) == 0)
	{
		count++;
	}
	return count;
}

int countLine(FILE *fp)
{
	int count = 0;
	char buff[BUFF_SIZE];
	while(fgets(buff,BUFF_SIZE,fp) && feof(fp) == 0)
	{
		count++;
	}
	return count;
}
