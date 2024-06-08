#include<stdio.h>
#include<conio.h>
int main()
{
	void callperfect(int);
	int no;
	printf("Enter Number to find Perfect number\n");
	scanf("%d",&no);
	callperfect(no);
	return 0;
}
void callperfect(int no)
{
	int sum=0;
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		printf("It is Perfect Number\n");
	}
	else
	{
		printf("It is not a Perfect Number\n");
	}
}