#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr1,*ptr2,i,size;
	printf("Enter the array size\n");
	scanf("%d",&size);
	ptr1=(int*)malloc(sizeof(int)*size);
	ptr2=(int*)malloc(sizeof(int)*size);
	printf("Enterthe Array element\n");
	for(i=0;i<size;i++)
	{
			scanf("%d",&ptr1[i]);
	}
	for(i=0;i<size;i++)
	{
		ptr2[i]=ptr1[i];
	}
	printf("The array 1 is\n");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr1[i]);
	}
	printf("The array 2 is\n");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr2[i]);
	}
}