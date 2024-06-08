#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);						// Size of array from user
	ptr=(int*)malloc(sizeof(int)*size);		// Dynamically memory allocation
	printf("Enter the array\n");
	for(i=0;i<size;i++)						// input array
	{
		scanf("%d",&ptr[i]);
	}
	printf("The array is\n");
	for(i=0;i<size;i++)			// Display of array
	{
		printf("%d",ptr[i]);
	}
	
	
	
}