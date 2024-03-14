#include<string.h>
#include<stdio.h>
int main() 
{
    char s1[100];
    int i;
    
    printf("Enter first string: ");
    scanf("%s", s1);
    for(i=0; s1[i]!='\0';i++);
      printf("\nfirst string:%c",s1[0]);
      printf("\nlast string:%c",s1[i-1]);
    
}
