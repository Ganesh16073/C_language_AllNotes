#include<stdio.h>
#include<conio.h>
int main()
{
	int i,len=0;
	char str[30];
	printf("Enter the string\n");
	gets(str);
	while(str[len]!='\0')
	{
		++len;
	}
	printf("Length of string is %d",len);
}