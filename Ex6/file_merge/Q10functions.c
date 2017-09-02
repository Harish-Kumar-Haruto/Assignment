#include "Q10functions.h"

int checkSortOrder(int *c, int size)
{
	int i;
	for(i=1;i<size;i++)
	{
		if(*(c+i-1) > *(c+i))
		{
			return -1;
		}
		if(*(c+i-1) < *(c+i))
		{
			return 1;
		}
	}
	return 0;
}

void sortAscending(int *arr, int size)
{
	int tmp,i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(arr+j) < *(arr+i))
			{
				tmp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = tmp;
			}
		}
	}
}

void sortDescending(int *arr, int size)
{
	int tmp,i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(arr+j) > *(arr+i))
			{
				tmp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = tmp;
			}
		}
	}
}
