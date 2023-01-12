#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of the array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=0;
	
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	}

