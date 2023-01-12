#include<stdio.h>
int main()
{
	int i,n,t;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of the array:");
		scanf("%d",&a[i]);
	}
	t=a[0];
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=t;
	printf("left shift array: ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
