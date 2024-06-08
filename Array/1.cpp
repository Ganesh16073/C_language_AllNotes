#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,sum=0;
	printf("enter the element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display of array\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	printf("\nSum = %d",sum);
	
}