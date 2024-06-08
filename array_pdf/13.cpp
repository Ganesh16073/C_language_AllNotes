#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,count,len;
	printf("enter the array\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		count=0;
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count>(len/2))
		{
			printf(" the major element is %d",a[i]);
		}
		else
		printf("their is no major elemeent");
	
	}
}