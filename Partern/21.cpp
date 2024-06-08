#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=1;j<=5;j++)
		{
			if(i>=j)
			{
				printf("%c",ch);	
			}
			ch++;
		}
		printf("\n");
	}
}