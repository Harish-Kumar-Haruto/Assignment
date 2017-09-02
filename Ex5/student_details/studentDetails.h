#ifndef _Q6FUNCTIONS_
#define _Q6FUNCTIONS_
#define SIZE 255



struct _student_
{

  	char name[SIZE];
  	int regNo;
  	char branch[SIZE];
  	float cgpa;
  	int marks;
};

typedef struct _student_ Student;

Student addNew();
int getRegno(char br[],int i);
int patt_Match(char mainStr[],char pattern[]);

#endif
