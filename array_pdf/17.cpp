#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j;
	printf("enter the Sorted array to find minimum missing element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("This are missing element\n");
	for(i=0;i<5;i++)
	{
		for(j=a[i]+1;j<a[i+1];j++)
		{
			printf("%d ",j);
		}
	}
	
	printf("this is minimum missing element\n");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]+1);
		break;
	}
}