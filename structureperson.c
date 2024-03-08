#include<stdio.h>
int main()
{
	struct person
	{
		char name[20];
		char add[20];
	 struct birth
	 {
	 	int dd,mm,yyyy;
	 }d1;
	}p1[10];
	int n,i;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter into of student");
	for(i=0;i<n;i++)
	{
		printf("Enter name of person:");
		scanf("%s",&p1[i].name);
		printf("Enter add of person:");
		scanf("%s",&p1[i].add);
		printf("Enter birthdate of person:");
		scanf("%d-%d-%d",&p1[i].d1.dd,&p1[i].d1.mm,&p1[i].d1.yyyy);
	}
	printf("Entered information:");
	for(i=0;i<n;i++)
	{
	printf("\nperson name:%s",p1[i].name);
	printf("\naddress:%s",p1[i].add);
	printf("\nbirthdate:%d-%d-%d",p1[i].d1.dd,p1[i].d1.mm,p1[i].d1.yyyy);
	}
}

