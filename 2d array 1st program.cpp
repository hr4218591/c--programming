#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("enter number  of row: ");
	scanf("%d",&n);
	printf("enter no of col:");
	scanf("%d",&m);
	int a[i][j];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
		printf("enter the value in 2D array:");
		scanf("%d",&a[i][j]);
	}
	printf("2d array is:");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		printf("%d\t",a[i][j]);
	}
	return 0;
}
