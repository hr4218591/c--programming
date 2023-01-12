#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of the array:");
		scanf("%d",&a[i]);
	}
	printf("alternate numbers of the given array is:");
	for(i=0;i<n;i=i+2)
	{
		printf("%d ",a[i]);
	}
}
