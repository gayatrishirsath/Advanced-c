#include<stdio.h>
#include<string.h>
int main()
{
	struct emp
	{
	 int id;
	 char name[20];
	 int sal;
	}e1[20];
	int i;
	for(i=0;i<5;i++)
	{
	 printf("Enter emp id:");
	 scanf("%d",&e1[i].id);
	 printf("Enter emp name:");
	 scanf("%s",&e1[i].name);
	 printf("Enter salary:");
	 scanf("%d",&e1[i].sal);
	}
	printf("\ENTERED INFORMATION OF EMPLOYEE.......");
	for(i=0;i<5;i++)
	{
	 printf("\nemp id:%d",e1[i].id);
	 printf("\nemp name:%s",e1[i].name);
	 printf("\nemp sal:%d",e1[i].sal);
	}

}
