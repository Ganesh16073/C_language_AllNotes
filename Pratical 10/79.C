#include<stdio.h>
#include<conio.h>
void main(){
int a=1,b=100;
clrscr();
printf("Even Numbers:");
while(a<=b)
{
	if(a%2==0)
	{
		printf(" %d",a);
	}
	a++;
}
// here we check number is odd or not
a=1;
printf("\nOdd Numbers:");
while(a<=b)
{
	if(a%2!=0)//(a%2==1)
	{
		printf(" %d",a);
	}
	a++;
}




getch();
}

