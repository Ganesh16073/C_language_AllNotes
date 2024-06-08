#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={1,2,3,4,5,6};
	int *ptr,i,sum=0;
	ptr=a;
	printf("the array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",ptr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+ptr[i];
	}
	printf("\nThe sum of array is %d\n",sum);
}