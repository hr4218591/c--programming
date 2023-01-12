#include<stdio.h>
int main()
{
	int size,i,sum=0;
	printf("enter the size of array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		printf("enter the element:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
	printf("the created array is:");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("sum of array is :%d",sum);
	return 0;
	
}

