#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],b[5],c[10],i,j;
	printf("Enter array 1\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i])	
	}
	printf("Enter array 2\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i])	
	}
	j=0;
	for(i=0;i<5;i++)
	{
		c[j]=a[i];
		j++;
	}
	for(i=0;i<5*2;i++)
	{
		for(j;j<5*2;j++)
		{
			if(c[i]==b[j])
			{
				
			}
			else
			{
				c[j]=b
			}
			
		}
	}

}