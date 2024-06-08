#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=6-i && i%2==0)
			{
				printf("*");
			}
			if(j>=6-i && i%2==1)
			{
				printf("#");
			}
		}
		printf("\n");
	}
}
