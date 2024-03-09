#define MAX (a,b) (a>b?a:b)
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
    
	 printf("\nMaximum number=%d",MAX(a,b));	
	
	
}
