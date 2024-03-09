#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2;
	char ch,s1[20],s2[20];
	printf("Enter source file...");
	scanf("%s",&s1);
		printf("Enter detination file...");
	scanf("%s",&s2);
	f1=fopen(s1,"r");
	f2=fopen(s2,"w");
	if(f1==NULL)
      {
      	printf("file not found...!");
      	exit(0);
	  }	
	  while(!feof(f1))
	  {
	  	ch=fgetc(f1);
	  	if(isupper(ch))
          fputc(tolower(ch),f2);
        else if(islower(ch))
           fputc(toupper(ch),f2);
        else if(isdigit(ch))
           fputc('*',f2);
   	  }
   	  fclose(f1);
   	  fclose(f2);
}
