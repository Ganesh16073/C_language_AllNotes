#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0,len=0,i;
	char str[30];
	printf("Enter the string\n");
	gets(str);
	while(str[len]!='\0')
	{
		if(str[len]==32)
		{
			++count;
		}
		++len;
	}
	printf("Space =%d",count);
}