#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int no,i,j,count,p,sum,temp,rem;
	printf("Enter range");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		temp=i;
		count=0;
		sum=0;
		while(temp!=0)
		{
			temp=temp/10;
			++count;
		}
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			p=pow(rem,count);
			sum=sum+p;
		}
		temp=i;
		if(sum==temp)
		{
			printf("%d ",i);
		}
	}
}