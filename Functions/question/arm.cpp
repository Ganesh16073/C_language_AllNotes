#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	void arm(int);
	int no;
	printf("Enter the range\n");
	scanf("%d",&no);
	arm(no);
	return 0;
}
void arm(int no)
{
	int i,sum,rem,p,temp,count;
	for(i=1;i<no;i++)
	{
		sum=0;
		temp=i;
		count=0;
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