#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==2 &&j>=3 && j<=4)||(i==3 &&j==4))
			{
				printf(" ");
			}
			else if(j>=i)
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