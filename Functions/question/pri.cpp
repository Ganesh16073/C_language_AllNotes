#include<stdio.h>
#include<conio.h>
int main()
{
	void prime(int);
	int no;
	printf("Enter the Range\n");
	scanf("%d",&no);
	prime(no);
	return 0;
}
void prime(int no)
{
	int i,j,count;
	for(i=1;i<=no;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				++count;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}
}