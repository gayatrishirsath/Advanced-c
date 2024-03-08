#include<stdio.h>
int main()
{
  FILE * f1,*f2;
  char s2[20],ch;
  f1=fopen("abc.txt","r");
  f2=fopen("g.txt","w");
  if(f1==NULL)
   {
   	printf("FILE NOT FOUND...!");
   	 exit(0);
   }
      while(!feof(f1))
      {
      	ch=fgetc(f1);
      	fputc(ch,f2);
	  }
	printf("FILE COPPIED SUCCESSFULLY.....!");
}
