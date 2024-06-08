#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,*ptr1,*ptr2,i,j,size,temp;
	printf("Enter size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	ptr1=(int*)malloc(sizeof(int)*size);
	ptr2=(int*)malloc(sizeof(int)*(size+size));
	printf("Enter the array-1 element \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter the array-2 element \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr1[i]);
	}
	j=0;
	for(i=0;i<size;i++)		//adding array 1
	{
		ptr2[j]=ptr[i];
		j++;
	}
	for(i=0;i<size;i++)		//adding array 2
	{
		ptr2[j]=ptr1[i];
		j++;
	}
	printf("Merge of array is\n");
	for(i=0;i<size*2;i++)
	{
		printf("%d ",ptr2[i]);
	}
	printf("\nDecending order\n");
	for(i=0;i<size*2;i++)
	{
		for(j=i+1;j<size*2;j++)
		{
			if(ptr2[i]<ptr2[j])
			{
				temp=ptr2[i];
				ptr2[i]=ptr2[j];
				ptr2[j]=temp;
			}
		}
	}
	printf("Array in Decending order\n");
	for(i=0;i<size*2;i++)
	{
		printf("%d ",ptr2[i]);
	}
}