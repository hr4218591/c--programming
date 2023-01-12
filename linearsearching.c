#include<stdio.h>
void main()
{
	int i,n,flag=0,key,pos;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of the array:");
		scanf("%d",&a[i]);
	}
	printf("the number to be search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			pos=i+1;
			flag=1;
			break;
		}
		}
		if(flag==1)
		printf("\nthe number  is at %d",pos);
		else
		printf("the number is not found");

}
