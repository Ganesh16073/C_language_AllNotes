#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nenter the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Print array with occurance\n");
	for(i=0;i<size;i++)
	{
		printf("%d -----> %d\n",&ptr[i],ptr[i]);
	}
}