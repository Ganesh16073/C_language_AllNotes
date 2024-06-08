#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[5],b[5],i,*ptr;
	printf("Enter array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(i=0;i<5;i++)
	{
		b[i]=ptr[i];
	}
	printf("Copy of array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d",b[i]);
	}
}