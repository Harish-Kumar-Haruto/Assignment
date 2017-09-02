#include<stdio.h>
#include<stdlib.h>
#define BEG 0
#define CUR 1
#define END 2

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: %s <FileName>\n",argv[0]);
		return 0;
	}
	else
	{
		FILE *fp;
		fp = fopen(argv[1],"r");
		int *c, count = 0, i;
		c = (int *)malloc(sizeof(int));
		while(fgetc(fp) >= 0)
		{
			fseek(fp,-1,1);
			c = realloc(c,(++count)*sizeof(int));
			*(c+count-1) = fgetc(fp);
		}
		fclose(fp);
		fp = fopen(argv[1],"w");
		for(i=count-1;i>=0;i--)
		{
			fputc(*(c+i),fp);
		}
		fclose(fp);
		printf("Contents of the file \"%s\" has been reversed\n",argv[1]); 
	}
	return 0;
}
