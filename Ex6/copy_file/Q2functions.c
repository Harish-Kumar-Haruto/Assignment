#include "Q2functions.h"

void copyFile(FILE *read, FILE *write)
{
	char buff[BUFF_SIZE];
	while(fgets(buff,BUFF_SIZE,read) && feof(read) == 0)
	{
		fprintf(write,"%s",buff);
	}
	printf("File copied!\n");
}
