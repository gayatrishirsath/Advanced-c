#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter first string=");
	gets(s1);
	printf("Enter second string=");
	gets(s2);
	 strupr(s1);
    printf("\nString in uppercase=%s",s1);
	strcpy(s1,s2);
	printf("\nFirst string=%s",s1);
    printf("\nSecond string=%s",s2);
    
}
