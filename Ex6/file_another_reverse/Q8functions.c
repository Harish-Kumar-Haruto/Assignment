#include "Q8functions.h"
#define BEG 0
#define CUR 1
#define END 2

void copyFileReverse(FILE *r, FILE *w)
{
	int c;
	fseek(r,0,END);
	while((int)ftell(r) > 0)
	{
		c = fgetc(r);
		if(c == -1)
		{
			fseek(r,-2,CUR);
			continue;
		}
		fputc(c,w);
		fseek(r,-2,CUR);
	}
	c = fgetc(r);
	fputc(c,w);
}
