#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,count=1,size,maxn,temp,rdup;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter the array\n");
	for(i=0;i<size;i++)				//input array
	{
	+-+
		scanf("%d",&ptr[i]);
	}
	printf("\nEnter the 1 Or 2 or 3rd Max number\n");
	scanf("%d",&maxn);
	for(i=0;i<size;i++)				// sorting logic
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
	printf("\nSorted Array\n");
	for(i=0;i<size;i++)				//sorted array
	{
		printf("%d ",ptr[i]);
	}
	i=0;
	for(j=0;j<size;j++)
	{
		if(ptr[i]!=ptr[j])
		{
			i++;
			ptr[i]=ptr[j];	
		}
	}
	rdup=i;
	printf("\nDuplicate value removed Array\n");
	for(i=0;i<size;i++)				//Removed Duplicate Value
	{
		printf("%d ",ptr[i]);
	}
	if(maxn<=rdup)
	{
		printf("The %d Max Number is %d",maxn,ptr[rdup-maxn-1]);
	}
	else
	printf("Teere is no max number\n");

	
}