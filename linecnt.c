#include<stdio.h>
int main()
{
  FILE * f1;
 char ch,s[100];
 int c2,c3;
 printf("Enter  first file name");
 scanf("%s",s);
 f1=fopen(s,"r");
 if(f1==NULL)
    {
      printf("file not exist");
        exit(0);
    }
   while( !feof(f1))
  { 
   ch=fgetc(f1);
    if(ch=='\n')
    {c2++;
	}
	if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
	 {
	  c3++;
	 }
  }
  fclose(f1);
  printf("\nline count=%d",c2);
  printf("\ncharacter count=%d",c3);
}
