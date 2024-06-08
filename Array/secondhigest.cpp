#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,temp,j;
	
	printf("\n enter array 1\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Display array 1\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
		printf("second high value is%d",a[5-2]);
	
}