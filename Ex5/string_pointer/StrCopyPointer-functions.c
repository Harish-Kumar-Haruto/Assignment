//Function to copy the strings

void StrCopy (char *src, char *dest)
{

 	int i=0;
 
	for (i=0; *(src+i) != '\n'; i++)
 		*(dest+i)=*(src+i);
 		*(dest+i)='\0';
  		dest-i;

}
