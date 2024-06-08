#include<stdio.h>
#include<conio.h>
int main()
{
	void callduck(int);
	int no;
	printf("Enter Number To check Duck number\n");
	scanf("%d",&no);
	callduck(no);
	return 0;
}
void callduck(int no)
{
	int rem,flag=1;
	while(no!=0)
	{
		rem=no%10;
		if(rem==0)
		{
			flag=0;
			break;
		}
		no=no/10;
	}
	if(!flag)
	{
		printf("Number is duck\n");
	}
	else
	{
		printf("Number is not duck\n");
	}
}