#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	void callprime(int);
	int no;
	printf("Enter the number to check Prime number or not\n");
	scanf("%d",&no);
	callprime(no);
	return 0;
}
void callprime(int no)
{
	int count=0;
	for(int i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			++count;	
		}	
	}
	if(count==2)
	{
		printf("number Is Prime Number\n");
	}
	else
	{
		printf("Number is not Prime Number");
	}
}