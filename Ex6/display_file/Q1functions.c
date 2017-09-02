#include "Q1functions.h"

void printFile(FILE *fp)
{
	char buff[BUFF_SIZE];
	while(fgets(buff,BUFF_SIZE,fp) && feof(fp) == 0)
	{
		printf("%s", buff);
	}
}
