#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int *ptr,i,j,temp;
	ptr=a;
	printf("The Array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;	
		}
	}
	printf("the revers of array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",ptr[i]);
	}
}