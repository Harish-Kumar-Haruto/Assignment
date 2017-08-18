#include<string.h>

int start_index(char string[256],char string1[10])
{

	int i,j,str1len,str2len,found=0, c;
	//char string[256] = "Ah Love! could you a I with Fate conspire To grasp this sorry scheme of things entire,Would not we shatter it to bits --- and then Re-mould it nearer to the Heart’s Desire!";
    
	str1len = strlen(string);
	str2len = strlen(string1);
	
    for (i=0;i<str1len - str2len;i++)
	{
        c= str2len;
		
        for(j=0;j<str2len;j++)
		{
			if (string[i+j]==string1[j])
            c--;
		}
        
        if (c == 0)
		{
            found = 1;
            break;
  		}
    }
    
    if (found == 1)
    {
        return i;
    }
    
	return 0;
	
}



