#include<stdio.h>
#include<conio.h>
int main()
{
	int size,i;
	printf("Enter size of array a \n");
	scanf("%d",&size);
	int a[size],pos;
	printf("enter first array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the index to remove value\n");
	scanf("%d",&pos);

	for(i=pos;i<size-1;i++)
	{
		a[i]=a[i+1];
	}

	printf(" array is\n");
	for(i=0;i<size-1;i++)
	{
		printf("%d ",a[i]);
	}
}