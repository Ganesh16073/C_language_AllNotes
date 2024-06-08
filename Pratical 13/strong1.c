#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i,j,sum,rem,temp,fact;
	printf("Enter the Range");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{ 
			while(i!=0)
			{
				temp=i;
				rem=i%10;
				fact=factorial(rem);
				sum=sum+fact;
				i=i/10;
			}
			i=temp;
		}
		if(sum==i)
		{
			printf("%d",i);
		}
	}
	return 0;
}