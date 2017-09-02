#include "Q8functions.h"

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		printf("Usage: \"%s\" <InputFileName> <OutputFileName>\n",argv[0]);
		return 0;
	}
	else
	{
		FILE *read, *write;
		read = fopen(argv[1],"r");
		write = fopen(argv[2],"w");
		copyFileReverse(read,write);
		fclose(read);
		fclose(write);
		printf("Contents of the file \"%s\" has been copied in reverse order into the file \"%s\"!\n", argv[1],argv[2]);
		return 0;
	}
}
