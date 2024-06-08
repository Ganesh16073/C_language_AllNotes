#include<stdio.h>
#include<conio.h>
#include<string.h>
main()	//strcat(str1,str2);
{
	int i,j,x,count1=0,count2=0;
	char str1[30];
	char str2[30];
	printf("Enter the string 1 \n");
	gets(str1);
	printf("Enter the string 2 \n");
	gets(str2);
	while(str1[i]!='\0')	// length of str1
	{
		i++;
		++count1;
	}
	i=0;
	while(str2[i]!='\0') 	// length of string2
	{
		i++;
		++count2;
	}
	x=count1+count2;
	for(i=count1,j=0;i<x;i++)
	{
		str1[i]=str2[j];
		count1++;
		j++;
	}
	printf("\n concat string is = %s",str1);
}