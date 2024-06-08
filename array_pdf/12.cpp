#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,sum=0;
	printf("enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter sum to find pair");
	scanf("%d",&sum);
	printf("to find a pair with given sum in the array.\n");
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]+a[j]==sum)
			{
				printf("index and Value :- %d & %d\t %d & %d\n",i,j,a[i],a[j]);
			}
		}
	}
}