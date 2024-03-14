#include<string.h>
#include<stdio.h>
int main() {
    char s1[100];
    int i,c=0;
    
    printf("Enter string: ");
    scanf("%s", s1);

    for(i=0; s1[i]!='\0';i++) 
    {
    	if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'
		||s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
	       c++;
    }
   printf("\nvowel count=%d",c);
}

