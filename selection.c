#include<stdio.h>
void main()
// bubble sort
{
	int n,i,t,j;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the elemnet of the array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;}
		
	}
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

