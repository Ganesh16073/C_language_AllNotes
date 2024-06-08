#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j || j==6-i)
			{
				printf("#");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
//j==5 && i==1 || j==4 && i==2||j==2 && i==4||j==1 && i==5 