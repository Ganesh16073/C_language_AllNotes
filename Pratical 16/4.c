#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==2 && j>=2 &&j<=3)||(i==3 && j==2))
			{
				printf(" ");
			}
			
			else if(j<=6-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}