#include<stdio.h>
int main()
{
  FILE * f1,*f2;
 char ch,s[100],s1[100];
 printf("Enter  first file name");
scanf("%s",s);
 printf("Enter second  file name");
scanf("%s",s1);
f1=fopen(s,"r");
f2=fopen(s1,"w");
if(f1==NULL)
    {
      printf("file not exist");
        exit(0);
    }
   while( !feof(f1))
  { 
   ch=fgetc(f1);
    fputc(ch,f2);    
  }
  fclose(f1);
  fclose(f2);
  printf("File copy succesfully....");
}

