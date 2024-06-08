#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,max=0,smax=-1,temp;
	printf("enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=(i+1);j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
	}
	
	
	
	
	
	
//	for(i=1;i<5;i++)
//	{
//		if(a[i]>max)
//		{
//			smax=max;
//			max=a[i];
//			
//		}
//		if(a[i]<max && a[i]>smax)
//		{
//			smax=a[i];
//		}
//	}
	printf("Second large element is :%d\nThe large element is :%d",smax,max);
	
}