#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,pos;
	printf("enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position to delete\n");
	scanf("%d",&pos);
	for(i=0;i<4;i++)
	{
		if(a[i]==a[pos])
		{
			a[i]=a[i+1];
		}
	}
	printf("the array is\n");
	for(i=0;i<4;i++)
	{
		printf("%d ",a[i]);
	}
	
}