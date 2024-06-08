#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("C://Users//Ganesh//Desktop//ganesh.txt","r");
	if(fp==NULL)
	{
		printf("The file is not availabel\n");
	}
	else
	{
		ch=getc(fp);
		printf("%c",ch);
	}
}