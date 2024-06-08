#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	void armstrong(int);
	int no;
	printf("Enter the Range to find ArmStrong Number\n");
	scanf("%d",&no);
	armstrong(no);
	return 0;
}
void armstrong(int no)
{
	int i,j,rem,temp,count,p,sum;
	for(i=1;i<=no;i++)
	{
		sum=0;
		count=0;
		temp=i;
		while(temp!=0)
		{
			temp=temp/10;
			++count;
		}
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			p=pow(rem,count);
			sum=sum+p;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}