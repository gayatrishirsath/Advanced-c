#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1;
	char ch,s1[20];
	printf("Enter file...");
	scanf("%s",&s1);
	f1=fopen(s1,"r+ ");
	if(f1==NULL)
      {
      	printf("file not found...!");
	  }	
	  while(!feof(f1))
	  {
	  	ch=fgetc(f1);
	  	if(isupper(ch))
         printf("%c",tolower(ch));
        else if(islower(ch))
          printf("%c",toupper(ch));
		 else 
		   printf("%c",ch);   	  
	 }
   	  
   	  fclose(f1);
   	
}
