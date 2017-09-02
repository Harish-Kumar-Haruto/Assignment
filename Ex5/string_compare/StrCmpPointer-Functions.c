//Function to Compare two strings, if same it returns 0 else returns -1
int StrComp(char *s1, char *s2)
{
 	
	int i=0;

	 for (i=0; *(s1+i)==*(s2+i); i++)
	     {
 
		if (*(s1+i)=='\n' && *(s2+i)=='\n') return 0;
       	     }

	return -1;
}
