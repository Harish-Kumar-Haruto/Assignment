#include "Q3functions.h"

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Usage: %s <InputFileName> <OutputFileName>\n",argv[0]);
		return 0;
	}
	else
	{
		FILE *read;
		FILE *write;
		read = fopen(argv[1], "r");
		write = fopen(argv[2], "w");
		printf("\nCopying contents of \"%s\" to \"%s\"...\n", argv[1], argv[2]);
		copyFile(read,write);
		fclose(read);
		fclose(write);
	}
	return 0;
}
