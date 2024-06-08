#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i,j,rem,sum,temp,fact;
	printf("enter Range");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		sum=0;
		temp=i;
		
		while(temp!=0)
		{
			fact=1;	j=1;
			rem=temp%10;
			while(j<=rem)
			{
				fact=fact*j;
				j++;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}