#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,pos,val;
	printf("Enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position to insert element\n");
	scanf("%d",&pos);
	printf("Enter value\n");
	scanf("%d",&val);
	for(i=5;i>pos-1;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=val;
	printf(" the array\n");
	for(i=0;i<=5;i++)
	{
		printf("%d ",a[i]);
	}
}