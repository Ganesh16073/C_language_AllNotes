#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,size,i,j,temp;
	printf("enter size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("array is \n");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	printf("\naccending order array is \n");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr[i]);
	}
	printf("\nMaximum number is %d\n minimum number is %d",ptr[size-1],ptr[0]);
}