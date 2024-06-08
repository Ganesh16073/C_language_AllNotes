#include<stdio.h>
#include<conio.h>
int main()
{
	int len=0,i,j,index=0;
	char str[30],str1[30];
	printf("Enter the string\n");
	gets(str);
	while(str[len]!='\0')
	{
		++len;
	}
	for(i=0;i<len;i++)	// logic for remove duplicate
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i]==str[j])	// break loop if duplicate char
			{
				break;
			}
		}
		if(j==len)	// if no duplicate the j will run to lenth, storing only non duplicate
		{
			str1[index++]=str[i];	// first assign value then post increment
		}
	}
	str1[index]='\0';
	printf("%s",str1);
	
}