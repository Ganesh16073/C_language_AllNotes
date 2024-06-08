#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i,j,sum;
	printf("enter Range");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{	
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}