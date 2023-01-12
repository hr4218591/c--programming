#include<stdio.h>
int main()
{
	char a[50];
	printf("enter your name:");
	gets(a);
	int i=0;
	while(a[i]!='\0')
	{
		printf("%s",a[i]);
		i++;
	}
	
	return 0;
}
