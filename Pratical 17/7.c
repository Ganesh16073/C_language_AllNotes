#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
			if(j==1)
			{
				printf("0");
			}
			else if(j==2)
			{
				printf("1");
			}
			else if(j==3)
			{
				printf("2");
			}
			else if(j==4)
			{
				printf("3");
			}
			else if (j==5)
			{
				printf("4");
			}
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}