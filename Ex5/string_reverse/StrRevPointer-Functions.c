//Function to find length of String

void StrLen (char *str,int *count)
{

	int i;
 
	for(i=0; *(str+i) != '\n'; i++,*count += 1);
}

//Function to reverse the string

void StrRev(char *str)
{

 	int len;
 	
	StrLen(str,&len);
 
	int half = len/2;
 
	len--;
 
	char temp;
 
	int i=0;
 
while(len>=half)
 	{
  		temp=*(str+len);
  		*(str+len)=*(str+i);
  		*(str+i)=temp;
  		i++;
  		len--;
	}
}
