#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,sum=0,size;      // declaration
	printf("Enter the size of array\n");
	scanf("%d",&size);						// Size of array from user
	ptr=(int*)malloc(sizeof(int)*size);		// Dynamically memory allocation
	printf("Enter the array\n");
	for(i=0;i<size;i++)						// input array
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<size;i++) 			// Addition logic
	{
		sum=sum+ptr[i];
	}
	printf("\nThe addition of array is %d",sum); // print Sum
}