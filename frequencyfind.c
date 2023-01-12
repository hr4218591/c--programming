#include<stdio.h>
void main()
{
	int i,n,freq=0,key;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of array:");
		scanf("%d",&a[i]);
	}
	printf("number is searched:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		freq++;
	}
	printf("the frequency of number is:%d",freq);
}
