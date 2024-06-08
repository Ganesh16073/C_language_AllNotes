#include<stdio.h>
#include<conio.h>
int main()
{
	void strong(int);
	int no;
	printf("Enter the Range to find Strong Number\n");
	scanf("%d",&no);
	strong(no);
	return 0;
}
void strong(int no)
{
	int fact,i,j,rem,temp,sum;
	for(i=1;i<=no;i++)
	{
		sum=0;
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			j=1;
			fact=1;
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