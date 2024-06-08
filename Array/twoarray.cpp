#include<stdio.h>
#include<conio.h>
int main()
{
	int k=0;
	int a[5],b[5],i,c[10];
	
	printf("\n enter array 1\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		c[k++]=a[i]; //merge of first array
	}
	printf("\n Display array 1\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
	printf("\n enter array 2\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
		c[k++]=b[i]; //merge of second array
	}
	
	printf("\n Display array 2\n");
	for(i=0;i<5;i++)
	{
		printf("%d",b[i]);
	}
	
	printf("\n Merge of two array \n");
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
	}
	
}