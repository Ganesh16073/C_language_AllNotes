#include<stdio.h>
#include<conio.h>
int main()
{
	void strong(int);
	int no;
	printf("Enter the Range to Find Strong Number\n");
	scanf("%d",&no);
	strong(no);
	return 0;
}
void strong(int no)
{
	int i,fact,rem,temp,j,sum;
	for(i=1;i<=no;i++)
	{
		sum=0;
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			fact=1;
			j=1;
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