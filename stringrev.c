#include<string.h>
#include<stdio.h>
int main() {
    char s1[100];
    int i;
    
    printf("Enter string: ");
    scanf("%s", s1);

    for(i = 0; s1[i] != '\0'; i++) ;
    printf("\nreverse string:");
    for(i=i-1;i>=0;i--)
    {
    	printf("%c",s1[i]);
	}
       
}

