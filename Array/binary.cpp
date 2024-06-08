#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,skey,flag=0,l,r,mid;
	printf("enter the element\n");
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay of array");
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter the search key\n");
	scanf("%d",&skey);
	l=0;
	r=9;
	while(i<=r)
	{
		mid=l+(r-l)/2;
		if(a[mid]==skey)
		{
			flag=1;
			break;
		}
		if(a[mid]<skey)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	if(flag)
	{
		printf("valude found");
	}
	else
	{
		printf("value not found");
	}
	
}