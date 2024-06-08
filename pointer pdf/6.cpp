#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,temp,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nenter the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("%d ptr",*ptr);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
		}
	}
	printf("\nthe revers of array\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
	
}