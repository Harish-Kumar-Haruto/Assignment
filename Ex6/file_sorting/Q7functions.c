#include "Q7functions.h"

#define BEG 0
#define CUR 1
#define END 2

void sortFileDescending(FILE *fp)
{
	
	int num1, num2, posBefore, posAfter, pos1, pos2, len1, len2, tmp;
	fseek(fp, 0, END);
	int fileLength = (int)ftell(fp) - 2;
	rewind(fp);
	do
	{
		posBefore = (int)ftell(fp);
		fscanf(fp,"%d",&num1);
		posAfter = (int)ftell(fp);
		if(posBefore == 0)
		{
			posBefore = -1;
		}
		len1 = posAfter - posBefore - 1;
		pos1 = posAfter - len1;
		while((int)ftell(fp) < fileLength)
		{
			posBefore = (int)ftell(fp);
			fscanf(fp,"%d",&num2);
			tmp = num2;
			posAfter = (int)ftell(fp);
			len2 = posAfter - posBefore - 1;
			pos2 = posAfter - len2;
			if(num1<num2)
			{
				if(len1 < len2)
				{
					fseek(fp,pos1+len1,BEG);
					manageSpace(fp,pos1+len1,pos2+len1,len2-len1);
					pos2++;
					fseek(fp,pos2,BEG);
					fscanf(fp,"%d",&num2);
				}
				fseek(fp,pos1,BEG);
				fprintf(fp,"%d",num2);
				fseek(fp,pos2,BEG);
				fprintf(fp,"%d",num1);
				num2 = tmp;
				num1 = num2;
				len1 = len2;				
			}
		}
		fseek(fp,pos1+len1,BEG);
	}while((int)ftell(fp) < fileLength);
}

void manageSpace(FILE *fp, int destStart, int sourceStart, int nChars)
{
	fseek(fp,sourceStart,BEG);
	int data,c;
	fscanf(fp,"%d",&data);
	fseek(fp,-(nChars+1),CUR);
	while((int)ftell(fp) >= destStart)
	{
		c = fgetc(fp);
		fputc(c,fp);
		fseek(fp,-(nChars+2),CUR);
	}
	fseek(fp,destStart,BEG);
	fprintf(fp,"%d",data);
}
