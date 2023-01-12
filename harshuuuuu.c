#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("eneter the element of the array:");
	scanf("%d",&a[i]);
	}
	printf("even element are:");
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
	printf("%d ",a[i]);
	}
	
}
