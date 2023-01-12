#include<stdio.h>
void main()
{

int n,i,min;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of the array:");
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("the maximum number in the array is:%d",min);
}
