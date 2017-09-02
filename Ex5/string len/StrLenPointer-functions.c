//Function to copy the strings

void StrLen (char *str,int *count)
{
 
	int i;
	
	for(i=0; *(str+i) != '\n'; i++,*count += 1);

}
