#include<stdio.h>
int main()
{
  FILE * f1;
 char ch,ch1,s[100];
   int c;
 printf("Enter file name");
scanf("%s",s);
printf("Enter character");
scanf("%s",&ch1);
f1=fopen(s,"r");
if(f1==NULL)
    {
      printf("file not exist");
        exit(0);
    }
   while( !feof(f1))
 {
   ch=fgetc(f1);
   if(ch==ch1)
   {
    c++;
    }
  }
 printf("character count=%d",c);
}

