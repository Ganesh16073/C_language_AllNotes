#include<stdio.h>
#include<conio.h>
int main()
{
	int i,len=0;
	char str[30];
	printf("Enter the String\n");
	gets(str);
	while(str[len]!='\0')
	{
		++len;
	}
	for(i=0;i<len;i++)
	{
		str[i]=str[i]-32;
	}
	printf("The strig is %s",str);
}