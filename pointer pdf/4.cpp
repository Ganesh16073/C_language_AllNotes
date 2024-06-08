#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,pos,value,i,j,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nenter the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("enter position to insert value\n");
	scanf("%d",&pos);
	printf("enter value to insert value\n");
	scanf("%d",&value);
	for(i=size+1;i<pos-1;i--)
	{
		ptr[i]=ptr[i-1];
	}
	ptr[pos]=value;
	printf("\n the array\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
}