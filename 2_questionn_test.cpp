#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,size,max3,temp,count=1;      // declaration
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
		printf("%d ",ptr[i]);
	}
	for(i=0;i<size;i++)   		// Sorting in accending order
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
	printf("The array is\n");
	for(i=0;i<size;i++)			// Display of array
	{
		printf("%d ",ptr[i]);
	}
	
	i=0;						// remove duplicate value
	for(j=1;j<size;j++)
	{
		if(ptr[i]!=ptr[j])
		{
			i++;
			ptr[i]=ptr[j];
		}
	}
	int dup=i;
	printf("The array after removing duplicates number \n");
	for(i=0;i<size;i++)			// Display of array
	{
		printf("%d ",ptr[i]);
	}

		printf("The 3rd max number is %d",ptr[dup-2]);
	
	
	
	
//	for(i=size-1;i>=0;i--)    		//logick to find 3rd max
//	{
//		for(j=i-1;j>=0;j--)
//		{
//			if(ptr[i]==ptr[j])
//			{
//				break;
//			}
//			else if(ptr[i]>ptr[j])
//			{
//				++count; 
//						// count of 3rd max number
//			}
//			
//			if(count==3)
//			{
//				max3=ptr[j];		// save 3rd max number
//			}
//		}
//	}
//		if(count<3)
//		{
//			printf("There is no 3rd Max\n");
//		}
//	printf("\n The 3rd max number is %d",max3);	
	
}