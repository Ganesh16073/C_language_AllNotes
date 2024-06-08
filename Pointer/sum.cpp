#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,size,sum;
	printf("Enter the Size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+ptr[i];
	}
	printf("%d",sum);
}