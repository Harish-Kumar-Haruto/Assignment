#include "Q11functions.h"

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
