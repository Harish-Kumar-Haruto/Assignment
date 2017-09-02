#include "Q1functions.h"
#define FILENAME "Q1input.txt"

int main()
{
	FILE *fp;
	fp = fopen(FILENAME,"r");
	printf("\nPrinting from file \"%s\" ...\n\n", FILENAME);
	printFile(fp);
	fclose(fp);
	return 0;
}
