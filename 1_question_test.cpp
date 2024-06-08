#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,pos,temp,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<5;i++)				// input from user
	{
		scanf("%d",&a[i]);
	}
	printf("enter the N to rotate an array\n");
	scanf("%d",&pos);				// pos is no of rotate 
	for(i=0;i<pos;i++)
	{
		for(j=i+1;j<pos;j++)		// reverse upto position logic
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;		
		}
	}
	for(i=pos;i<len;i++)
	{
		for(j=i+1;j<len;j++)		// reverse after position logic
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	for(i=0;i<5;i++)		//revers all array logic
	{
		for(j=i+1;j<5;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	for(i=0;i<5;i++)  // print array 
	{
		printf("%d ",a[i]);
	}
	
}
