#include<stdio.h>
#include<conio.h>
int main()
{
	int countA=0,countD=0,countS=0,len=0,i;
	char str[30];
	printf("Enter the string\n");
	gets(str);
	while(str[len]!='\0')
	{
		++len;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			++countA;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
			++countD;
		}
		else
		{
			++countS;
		}
	}
	printf("Alaphabet =%d\t Digit=%d\t Symbol=%d\n",countA,countD,countS);
}