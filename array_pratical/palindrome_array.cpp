#include<stdio.h>
#include<conio.h>
int main()
{
	int size,i,j,flag=1,len,temp,start,end;
	printf("Enter size of array a \n");
	scanf("%d",&size);
	int a[size],demo[size];
	printf("enter first array\n");
	len=sizeof(a[size])/sizeof(a[0]);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	demo[size]=a[size];
	// logic 
	start=0;
	end=len-1;
	for(start=0;i<size;start++)
	{
		if(a[start]!=a[end])
		{
			flag=0;
			break;
		}
		end++;
	}
	if(flag)
	{
		printf("it is palindrome");
	}
	if(!flag)
	{
		printf("it is  not palindrome");
	}
}