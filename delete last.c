#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of array:");
		scanf("%d",&a[i]);
	}
	a[n-1]=0;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
