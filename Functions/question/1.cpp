#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	void callrev(int);
	void callpal(int);
	void callpow(int,int);
	void callsum(int);
	int choice,no,base,power;
	printf("1 : Reverse number\n");
	printf("2 : Palindrome\n");
	printf("3 : Power of number\n");
	printf("4 : Sum of Digit\n");
	printf("Enter Choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the Number\n");
			scanf("%d",&no);
			callrev(no);
			break;
		case 2:
			printf("Enter number to check Palindrome\n");
			scanf("%d",&no);
			callpal(no);
			break;
		case 3:
			printf("Enter Base of number");
			scanf("%d",&base);
			printf("Enter power of number");
			scanf("%d",&power);
			callpow(base,power);
			break;
		case 4:
			printf("Enter number to sum of digit\n");;
			scanf("%d",&no);
			callsum(no);
			break;
	}
	
}
void callrev(int x)
{
	int rev=0,rem;
	while(x!=0)
	{
		rem=x%10;
		x=x/10;
		rev=rev*10+rem;	
	}
	printf("%d is revers of number",rev);
}
void callpal(int x)
{
	int rev=0,rem,temp;
	temp=x;
	while(x!=0)
	{
		rem=x%10;
		x=x/10;
		rev=rev*10+rem;	
	}
	if(rev==temp)
	{
		printf("It is Palidrome number");
	}
	else
	{
		printf("Not a Palidrome number");
	}
}
void callpow(int base,int power)
{
	int sum=1;
	for(int i=1;i<=power;i++)
	{
		sum=sum*base;
	}
	printf("The value id %d",sum);
}
void callsum(int x)
{
	int sum=0,rem;
	while(x!=0)
	{
		rem=x%10;
		x=x/10;
		sum=sum+rem;	
	}
	printf("%d is Sum of Numbers",sum);
}