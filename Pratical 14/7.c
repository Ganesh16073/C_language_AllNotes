#include<stdio.h>
#include<conio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j<=i && j%2==0)
			{
				printf("#");
			}
			else if(j<=i && j%2==1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}