#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("C://Users//Ganesh//Desktop//ganesh.txt","r");
	ch=getc(fp);
	
	printf("%c",ch);
	
}