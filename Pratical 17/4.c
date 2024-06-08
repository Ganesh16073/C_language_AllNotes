#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=69;j++)
		{
			if(i==i)
			{
				printf("%c",i);
			}
		}
		printf("\n");
	}
	return 0;
}