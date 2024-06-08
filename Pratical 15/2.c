#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==3 && j==2)||(i==4 && j>=2 && j<=3))		
			{
				printf(" ");
			}
			else if(i<j)
			{
				printf(" ");
			}
			else
			printf("*");
			
		}
		printf("\n");
	}
}