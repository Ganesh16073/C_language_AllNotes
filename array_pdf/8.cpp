#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],b[5],c[10],ind=0,i;
	printf("Enter array A\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter array B\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<5;i++)
	{
		c[ind]=a[i];  //enter a element
		ind++;
	}
	for(i=0;i<5;i++)
	{
		c[ind]=b[i];    //enter b element
		ind++;
	}
	printf("the merge of array is\n");
	for(i=0;i<10;i++)
	{
		printf("%d",c[i]);
	}
	
	
}
