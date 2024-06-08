#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int a[size],i,j;
	int *ptr;
	ptr=a;
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter array element in accending order\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("The missing element of array is\n");
	for(i=0;i<size;i++)
	{
		for(j=ptr[i]+1;j<ptr[i+1];j++)
		{
			printf("%d\n",j);
		}	
		
		
	}
	
}