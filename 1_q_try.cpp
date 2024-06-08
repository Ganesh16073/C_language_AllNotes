#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,k,rot,temp,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<5;i++)				// input from user
	{
		scanf("%d",&a[i]);
	}
	printf("enter the N to rotate an array\n");
	scanf("%d",&rot);				// pos is no of rotate 
	for(k=1;k<=rot;k++)
	{
		for(i=0;i<5;i++)
		{
			temp=a[i];
			while(i<5)
			{
				a[i]=a[i+1];
			}
			a[len-1]=temp;
		
		}
	}
	printf("After rotation\n");
	for(i=0;i<5;i++)				// input from user
	{
		printf("%d ",a[i]);
	}
	
}