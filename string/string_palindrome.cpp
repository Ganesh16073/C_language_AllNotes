#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,len=0;
	char str[30],temp,str2[30];
	printf("Enter the string\n");
	gets(str);
	strcpy(str2,str);
	while(str[len]!='\0')
	{
		len++;
	}
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{         
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
		}
	}
	printf("Revers of string is %s\n",str);
	if(strcmp(str,str2)==0)
	{
		printf("The string is Palindrome\n");
	}
	else
	printf("Not A Palindrome String");
}