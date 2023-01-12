#include<stdio.h>
void main()
{
	int i,n,sum=0,pro=1;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of array :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		sum=sum+a[i];
		else
		pro=pro*a[i];
	}
	printf("sum of even number is:%d\n ,product of odd number is:%d\n",sum,pro);
}
