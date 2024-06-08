#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,flag=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
				if(!flag)
				{
					printf("*");
					flag=1;
				}
				else if(flag)
				{
					printf("#");
					flag=0;
				}
		}
		printf("\n");
	}
}