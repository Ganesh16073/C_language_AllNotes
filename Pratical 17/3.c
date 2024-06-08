#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,flag=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(flag)
			{
				printf("1");
				flag=0;
			}
			else if(!flag)
			{
				printf("0");
				flag=1;
			}
		}
		printf("\n");
	}
}