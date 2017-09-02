#include "Q2functions.h"
#define INPUT_FILENAME "Q2input.txt"
#define OUTPUT_FILENAME "Q2output.txt"

int main()
{
	FILE *read;
	FILE *write;
	read = fopen(INPUT_FILENAME, "r");
	write = fopen(OUTPUT_FILENAME, "w");
	printf("\nCopying contents of \"%s\" to \"%s\"...\n", INPUT_FILENAME, OUTPUT_FILENAME);
	copyFile(read,write);
	fclose(read);
	fclose(write);
	return 0;
}
