#include "Q6functions.h"

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Usage: %s <FileName1> <FileName2>\n",argv[0]);
		return 0;
	}
	else
	{
		FILE *file1, *file2;
		file1 = fopen(argv[1],"r");
		file2 = fopen(argv[2],"r");
		if(compareFiles(file1, file2) == 1)
		{
			printf("The files \"%s\" and \"%s\" are same\n",argv[1],argv[2]);
		}
		else
		{
			printf("The files \"%s\" and \"%s\" are different\n",argv[1],argv[2]);
		}
		fclose(file1);
		fclose(file2);
	}
	return 0;
}
