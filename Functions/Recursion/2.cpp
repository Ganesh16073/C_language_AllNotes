#include<stdio.h>
#include<conio.h>
int rem,rev=0;
int main()
{
	int reve(int);
	int no;
	printf("Enter the Number to revers\n");
	scanf("%d",&no);
	int result=reve(no);
	printf("%d",rev);
}
int reve(int no)
{
	if(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
		reve(no);
	}
	
	return rev;

}