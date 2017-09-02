#include "Q10functions.h"
#define FILE1 "Q10file1.txt"
#define FILE2 "Q10file2.txt"

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Usage: %s <FileName 1> <FileName 2>\n",argv[0]);
		return 0;
	}
	else
	{
		FILE *fp;
		fp = fopen(argv[1],"r");
		int *c, count = 0, count1 = 0, count2 = 0, i;
		c = (int *)malloc(sizeof(int));
		while(fscanf(fp,"%d",(c+count)) && feof(fp) == 0)
		{
			count++;
			count1++;
			c = realloc(c,(count+1)*sizeof(int));
		}
		fclose(fp);
		fp = fopen(argv[2],"r");
		while(fscanf(fp,"%d",(c+count)) && feof(fp) == 0)
		{
			count++;
			count2++;
			c = realloc(c,(count+1)*sizeof(int));
		}
		fclose(fp);
		int order = checkSortOrder(c,count1);
		if(order == 0)
		{
			order = checkSortOrder(c+count1+1,count2);
		}
		if(order == -1)
		{
			sortDescending(c,count);
		}
		else
		{
			sortAscending(c,count);
		}
		fp = fopen(argv[1],"w");
		for(i=0;i<count;i++)
		{
			fprintf(fp,"%d ",*(c+i));
		}
		fclose(fp);
		printf("Files \"%s\" and \"%s\" are merged and sorted into \"%s\"\n",argv[1],argv[2],argv[1]);
	}
	return 0;
}
