#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,pos;
	printf("Enter the Array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position to delete\n");
	scanf("%d",&pos);
	for(i=pos;i<5;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
}