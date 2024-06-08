#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0,len=0,i,sum=0;
	char str[30];
	printf("Enter the string\n");
	gets(str);
	while(str[len]!='\0')
	{
		++len;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]>=48 && str[i]<57)
		{
			sum+=str[i]-48;
		}
	}
	printf("The sum is %d",sum);
}