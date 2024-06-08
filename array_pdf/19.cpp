#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,sum=0,ind1,ind2,csum=100;
	printf("Enter element in array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			sum=a[i]+a[j];
			if(sum>0 && sum<csum)
			{
				csum=sum;
				ind1=i;
				ind2=j;
			}
			if(sum<0 && sum>csum)
			{
				csum=sum;
				ind1=i;
				ind2=j;
			}
		}
	}
	printf("close sum is: %d and Index of sum is %d and %d ",csum,ind1,ind2);
}