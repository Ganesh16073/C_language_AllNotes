#include<stdio.h>
#include<conio.h>
int main()
{
	int i,countV,countC,len;
	countV=0;
	countC=0;
	len=0;
	char str[30];
	printf("Enter the string\n");
	gets(str);
	while(str[len]!='\0')
	{
		++len;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O'|| str[i]=='U')
		{
			++countV;
		}
		else if(str[i]!='a' || str[i]!='e'|| str[i]!='i' || str[i]!='o'|| str[i]!='u' || str[i]!='A' || str[i]!='E'|| str[i]!='I' || str[i]!='O'|| str[i]!='U')
		{
			++countC;
		}
	}
	printf("Total Vowel is %d\n",countV);
	printf("Total Consonent is %d\n",countC);
}