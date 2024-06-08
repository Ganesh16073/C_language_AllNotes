#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,size,temp;
	printf("Enter the Size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter the array\n");
	for(i=0;i<size;i++)		//input
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<size;i++)    //Sorting logic
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
	printf("\nAccending order Sort is\n"); //display
	for(i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("Printing The missing Element\n");		//missing element logic
	for(i=0;i<size;i++)
	{
		for(j=ptr[i]+1;j<ptr[i+1];j++)
		{
			printf("%d\t",j);
		}
	}
	
}