#include<stdio.h>
// no of letter without space is added
int main()
{
	char a[50];
	printf("enter sentence:");
	gets(a);
	int i,k,t=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		t++;
	}
	k=i-t;
	printf("no of letters are:%d",k);
	return 0;
}
