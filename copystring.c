#include<string.h>
#include<stdio.h>
int main() {
    char s1[100],s2[100];
    int i;
    
    printf("Enter first string: ");
    scanf("%s", s1);
    
    printf("Enter second string: ");
    scanf("%s", s2);
    
    for(i=0; s1[i]!='\0';i++) 
    {
      s1[i]=s2[i];
       i++;
    }
    s1[i]='\0';
   printf("\nfiirst string:%s",s1);
     
      printf("\nsecond string:%s",s2);
}

