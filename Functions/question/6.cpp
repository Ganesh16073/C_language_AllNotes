#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	void callarmstrong(int);
	int no;
	printf("Enter the Number To check Armstrong number\n");
	scanf("%d",&no);
	callarmstrong(no);
	return 0;
}
void callarmstrong(int no)
{
	int temp=no;
	int rem,i=1,count=0,sum=0,p;
	while(temp!=0)
	{
		temp=temp/10;
		++count;
	}
	temp=no;
	while(temp!=0)
	{
		rem=temp%10;
		p=pow(rem,count);
		sum=sum+p;
		temp=temp/10;
	}
	if(sum==no)
	{
		printf("Number is Armstrong\n");
	}
	else
	{
		printf("Number is Not ArmStrong");
	}
}