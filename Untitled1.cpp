#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of first array :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the element of second array:");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("sum of the array of %d is:%d \n",i,c[i]);
	}
	printf("n
	ew array is=");
	for(i=0;i<n;i++)
	{
		printf("%d  ",c[i]);
	}
	
}
