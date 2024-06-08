#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0;
	char ch;
	FILE *fp;
	fp=fopen("C://Users//Ganesh//Desktop//ganesh.txt","r");
	if(fp==NULL)
	{
		printf("file Not found\n");
	}
	else
	{
		while(ch=(getc(fp))!=EOF)
		{
			++count;
		}
		printf("COUNT= %d",count);
	}
	
}