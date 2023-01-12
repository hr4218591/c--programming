#include<stdio.h>
int main()
{
	int n,i,t;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of array:");
		scanf("%d",&a[i]);
		
	}
	t=a[n-1];
	for(i=n-1;i>=0;i--)
	{
	a[i]=a[i-1];
	}
	a[0]=t;
	printf("right  shift array:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
