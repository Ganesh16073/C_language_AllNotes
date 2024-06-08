#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i,x,count1=0,count2=0;
	char str1[30];
	char str2[30];
	printf("Enter the string 1 \n");
	gets(str1);
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
	if(count1>count2)	// length logic
	{
		x=count1;
	}
	else if(count1<count2)
	{
		x=count2;
	}
	else
	{
		x=count1;
	}
	
	for(i=0;i<x;i++)	//logic
	{
		str2[i]=str1[i];
	}
	
	printf("first string : %s\n",str1);
	printf("copy of string : %s\n",str1);
	return 0;
}