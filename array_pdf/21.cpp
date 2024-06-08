#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,len,count;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		count=0;
		for(j=0;j<5;j++)
		{
			if(a[i]==a[j])
			{
				++count;
			}
		}
		if(count>len/2)
		{
			printf("The %d appear more than len/2",a[i]);
		}
	}
		
}