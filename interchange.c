#include<stdio.h>
int main()
{
	 int n1,n2,*p,*q,t;
	 printf("Enter first number:");
	 scanf("%d",&n1);
	 printf("\nEnter second number:");
	 scanf("%d",&n2);
	 p=&n1;
	 q=&n2;
	 t=*p;
	 *p=*q;
	 *q=t;
	 printf("\nFirst number:%d",n1);
	 printf("\nSecond number:%d",n2);
}
