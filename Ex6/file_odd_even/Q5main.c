#include<stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Usage: %s <InputFileName> <OutputFileName>\n",argv[0]);
		return 0;
	}
	else
	{
		int num;
		FILE *read, *write;
		read = fopen(argv[1],"r");
		write = fopen(argv[2],"w");
		printf("Reading from \"%s\" ...\n",argv[1]);
		while(fscanf(read,"%d",&num) && feof(read) == 0)
		{
			if(num%2 == 0)
			{
				fprintf(write,"%s\n","Even");
			}
			else
			{
				fprintf(write,"%s\n","Odd");
			}
		}
		printf("Written Even/Odd to \"%s\" ...\n",argv[2]);
		fclose(read);
		fclose(write);
	}
	return 0;
}
