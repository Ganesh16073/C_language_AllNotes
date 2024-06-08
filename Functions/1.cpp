#include<stdio.h>
#include<conio.h>
int main()
{
	void calladd(int,int);
	void callsub(int,int);
	void callmul(int,int);
	void calldiv(int,int);
	void callmod(int,int);
	int a,b,choice;
	printf("Enter value of A and B\n");
	scanf("%d%d",&a,&b);
	printf("Enter the option\n");
	printf("1 : addition\n");
	printf("2 : Subraction\n");
	printf("3 : Multiplication\n");
	printf("4 : Division\n");
	printf("5 : Modulus\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 	calladd(a,b);
					break;
		case 2: 	callsub(a,b);
					break;
		case 3:		callmul(a,b);
					break;
		case 4:		calldiv(a,b);
					break;
		case 5:		callmod(a,b);
					break;
		default: 	printf("Invalid option\n");
	}
	return 0;
}
void calladd(int x,int y)
{
	printf("The addition of A and B is %d\n",x+y);
}
void callsub(int x,int y)
{
	printf("The subraction of A and B is %d\n",x-y);
}
void callmul(int x,int y)
{
	printf("The multiplication of A and B is %d\n",x*y);
}
void calldiv(int x,int y)
{
	printf("The Division of A and B is %d\n",x/y);
}
void callmod(int x,int y)
{
	printf("The modulus of A and B is %d\n",x%y);
}