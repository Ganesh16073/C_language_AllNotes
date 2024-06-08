#include<stdio.h>
#include<conio.h>
int main()
{
	void perfect(int);
	int no;
	printf("Enter the Range to find Perfect number\n");
	scanf("%d",&no);
	perfect(no);
	return 0;
}
void perfect(int no)
{
	int i,j,sum;
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
}