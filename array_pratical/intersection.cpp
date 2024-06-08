#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],b[5],i,j,c[5];
	printf("enter first array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter second array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	//logic
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
					
			}
			
		}
	}
	printf("\nthe intersection array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",c[i]);
	}
	
}