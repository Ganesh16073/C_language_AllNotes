#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,skey,flag=0,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the value\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display of array\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter to find number");
	scanf("%d",&skey);
	for(i=0;i<5;i++)
	{
		if(a[i]==skey)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("number is found");
	}
	else
	{
		printf("number is not found");
	}
}