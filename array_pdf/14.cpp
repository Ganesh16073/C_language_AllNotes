#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,pos,temp,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position to rotate an array\n");
	scanf("%d",&pos);
	for(i=0;i<=pos;i++)
	{
		for(j=i+1;j<=pos;j++)		// reverse upto position
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;		
		}
	}
	for(i=pos+1;i<len;i++)
	{
		for(j=i+1;j<len;j++)		// reverse after position
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	for(i=0;i<10;i++)		//revers all array
	{
		for(j=i+1;j<10;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
}


//123456789 original array
//   5    rotate from 5
//567891234 final answer
//
//4321 98765  rotate upto 5 then rotate after 5
//
//567891234    reverse whole array