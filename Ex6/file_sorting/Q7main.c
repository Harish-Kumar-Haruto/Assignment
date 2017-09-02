#include "Q7functions.h"

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: %s <FileName>\n",argv[0]);
		return 0;
	}
	else
	{
		FILE *fp1;
		fp1 = fopen(argv[1],"r+");
		sortFileDescending(fp1);
		fclose(fp1);
		printf("The file \"%s\" sorted in descending order\n",argv[1]);
	}
	return 0;
}
