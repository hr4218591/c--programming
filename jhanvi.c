#include<stdio.h>
void main()
{
	int a,b,c,d,f;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	printf("enter the value of d:");
	scanf("%d",&d);
	f=a*b+c%d;
	printf("value of f is:%d",f);
	
	}
