#include "Q6functions.h"

int compareFiles(FILE *fp1, FILE *fp2)
{
	char cf1, cf2;
	do
	{
		fscanf(fp1, "%c", &cf1);
		fscanf(fp2, "%c", &cf2);
		if(cf1 != cf2)
		{
			return 0;
		}
	}while(feof(fp1) == 0 || feof(fp2) == 0);
	return 1;
}
