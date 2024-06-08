#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,key,size,i,flag=0,ind;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter the array Element\n");
	for(i=0;i<size;i++)						// input
	{
		scanf("%d",&ptr[i]);
	}
	printf("\nEnter the Search element\n");		// search key
	scanf("%d",&key);
	for(i=0;i<size;i++)		// Linear Search Algorithm
	{
		if(ptr[i]==key)
		{
			flag=1;
			ind=i;
			break;
		}
	}
	if(flag)
	{
		printf("Element found In Index : %d ",i);
	}
	else
	{
		printf("Element not found");
	}
}