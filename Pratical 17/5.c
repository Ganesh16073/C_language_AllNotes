#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	for(i=65;i<=70;i++)
	{
		for(j=65;j<=70;j++)
		{
			if(i<=j)
			{
				printf("%c",i);
			}
		}
		printf("\n");
	}
	return 0;
}
//not done