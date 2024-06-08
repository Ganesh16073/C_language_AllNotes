#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=2&&j<=4 &&i==2)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}