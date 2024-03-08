#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int l;
	printf("Enter string:");
	gets(name);
	l=strlen(name);
	printf("Length of string:%d",l);
}



