#include<stdio.h>
int main()
{
	struct stud
	{
	int rno;
	char name[20];
	float per;
	}s1;
    printf("Enter roll no:");
    scanf("%d",&s1.rno);
    printf("Enter name:");
    scanf("%s",&s1.name);
    printf("Enter percentage:");
    scanf("%f",&s1.per);
    printf("\nentered informaton are:");
    printf("..................");
	  printf("\nstudent roll no:%d",s1.rno);
	  printf("\nstudent name:%s",s1.name);
	  printf("\nstudent percenatge:%f",s1.per);
	}
