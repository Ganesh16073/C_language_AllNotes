#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i,x,diff,count1=0,count2=0;
	char str1[10];
	char str2[10];
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
	printf("Size = %d, %d",count1,count2);
	for(i=0;i<x;i++)
	{
		diff=str1[i]-str2[i];
		if(diff>0)
		{
			printf("%s is greater than %s\n",str1,str2);
			break;
		}
		else if(diff<0)
		{
			printf("%s is greater than %s\n",str2,str1);
			break;
		}
	}
	if(diff==0)
	{
		printf("%s And %s Are Same\n",str1,str2);
	}
	return 0;
}