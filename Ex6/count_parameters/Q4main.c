#include "Q4functions.h"

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return 0;
	}
	else
	{
		FILE *fp;
		fp = fopen(argv[1],"r");
		printf("Number of characters in \"%s\" : %d\n",argv[1],countChar(fp));
		rewind(fp);
		printf("Number of lines in \"%s\" : %d\n",argv[1],countLine(fp));
		rewind(fp);
		printf("Number of tabs in \"%s\" : %d\n",argv[1],countTab(fp));
		rewind(fp);
		printf("Number of spaces in \"%s\" : %d\n",argv[1],countSpace(fp));
		fclose(fp);
	}
	return 0;
}
