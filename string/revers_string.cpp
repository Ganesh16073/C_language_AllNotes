#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,len=0;
	char str[30],temp;
	printf("Enter the string\n");
	gets(str);
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
	printf("The revers string is [ %s ]",str);
}