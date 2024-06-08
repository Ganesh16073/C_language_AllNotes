#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=1;j<=9;j++)
		{
			if(j<=i)
			{
				printf("%c",ch++);
			}
			if(j<=i && j%2==0)
			{
				printf("%c",ch--);
			}
		}
		printf("\n");
	}
}