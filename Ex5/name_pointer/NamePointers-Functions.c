//Function to split the full string based on space

void nameSplit (char *name,char *first,char *mid, char *last)
{

	 int i,j=0;
	
	 for (i=0,j=0; *(name+i) != 32; i++,j++)
   		*(first+j) = *(name+i);
 		*(first+j)='\0';
 
	for(i=i+1,j=0;*(name+i) != 32;i++,j++)
		*(mid+j)=*(name+i);
 		*(mid+j)='\0';
 
	for(i=i+1,j=0;*(name+i)!= '\n';i++,j++)
   		*(last+j)=*(name+i);
 		*(last+j)='\0';

}

