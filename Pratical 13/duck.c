#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i,j,flag=0,rem,temp;
	printf("Enter the range");
	scanf("%d",&no);
	temp=no;
	for(i=1;i<=no;i++)
	{
		temp=i;
		flag=0;
		for(j=1;j<=temp;j++)
		{
			rem=temp%10;
			if(rem==0)
			{
				flag=1;
				break;
			}
			temp=temp/10;
		}
		if(flag)
		{
			printf("%d ",i);
		}
	}
}