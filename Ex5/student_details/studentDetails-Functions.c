#include "studentDetails.h"
#include<stdio.h>
#include<stdlib.h>

//Function to add new student details

char branches[]={" Embedded Systems, Embedded and Wireless Technology, VLSI Design, Medical Software"};

Student addNew()
{

 	FILE *fp1;
 	fp1=fopen("studentDetails.txt","a");
 	Student s;
 	static int stud;
 	printf("Enter the full name of Student\n");
 	fgets(s.name,3*SIZE,stdin);
 	fgets(s.name,3*SIZE,stdin);
 	printf("Enter the Branch of student\n");
 	fgets(s.branch,3*SIZE,stdin);
 	printf("Enter the CGPA of student\n");
 	scanf("%f",&s.cgpa);
 	printf("Enter the marks of student\n");
 	scanf("%d",&s.marks);  
 	stud++;
 	s.regNo = getRegno(s.branch,stud);
 	fprintf(fp1,"%s%d\n%s%f\n%d\n",s.name,s.regNo,s.branch,s.cgpa,s.marks);
 	
	fclose(fp1);
  	
	return s;
}

int getRegno(char br[],int i)
{
   int res = patt_Match(branches,br);
   if(res==-1) { printf("Enter the correct branch name\n"); return 0;
   }
   
   return ((res*1000) + i);
}

int patt_Match(char mainStr[],char pattern[])
{
  	int i=0;
  	int j=0;
  
	//printf("%s\n%s\n",mainStr,pattern);
  
	for(i=0; mainStr[i] != 10; i++)
  		{
      			if(pattern[0]==mainStr[i])
				{
				  int k;
				  for(k=i,j=0; pattern[j]==mainStr[k] && mainStr[k]!= 10; j++,k++);			
		  
					if(j>0 && pattern[j]=='\n') return i;
		
				}
 		 }
 	 return -1;
}

void displayMarks(Student s[],int size)
{
  	FILE *fp1;
  	int i=0,j=0;
 
	fp1=fopen("studentDetails.txt","r");
 
	 printf("Students with >90 marks are as follows\n");
  
	for(i=0;i<size;i++)
  		{
     
     			if(s[i].marks>90)
      				{
        				 printf("---------------\n");
         				 printf("Name: %s\n",s[j].name);
	 				 printf("RegNo: %d\n",s[j].regNo);
 	 				 printf("Branch: %s\n",s[j].branch);
	 				 printf("CPGA: %f\n",s[j].cgpa);
	 				 printf("Marks: %d\n",s[j].marks);
      				}
	
  		}
  
  	fclose(fp1);
}

void countStudents(Student s[])
{
   
}
