#include<stdio.h>
int main()
{ 
   struct stud
   { 
     int rno;
     char name[20];
     float per;
   }s[100];
  FILE * f;;
  int n,i;
   f=fopen("student.txt","w");
   if(f==NULL)
      {
       printf("file not found....!");
       exit(0);
	  }
	  printf("Enter limit=");
	  scanf("%d",&n);
	  printf("Enter rollno name percentage=");
	  for(i=0;i<n;i++)
	  {
	  	scanf("\n%d%s%f",&s[i].rno,&s[i].name,&s[i].per);
	  	fprintf(f,"%d%s%f",s[i].rno,s[i].name,s[i].per);
	  }
	 fclose(f);
	  f=fopen("student.txt","r");
	  printf("rollno\tname\tpercentage");
	  printf("\n..................................................................");
	  while(!feof(f))
	  {
	  	fscanf(f,"%d%s%f",&s[i].rno,&s[i].name,&s[i].per);
	  	printf("\n%d\t%s%f\t",s[i].rno,s[i].name,s[i].per);
	  }
	  fclose(f);
}
