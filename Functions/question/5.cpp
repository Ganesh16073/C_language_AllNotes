#include<stdio.h>
#include<conio.h>
int main()
{
	void callstrong(int);
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	callstrong(no);
	return 0;
}
void callstrong(int no)
{
	int temp=no;
	int sum=0;
	while(no!=0)
	{
		int rem,fact=1,i=1;
		rem=no%10;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("It is a Strong Number\n");
	}
	else
	{
		printf("It is not a Strong Number\n");
	}
}