#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,temp=0;
	printf("enter array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay array\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=(i+1);j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("Accending order\n")
	for(i=0;i<5;i++)
	{
		printf("\n%d ",a[i]);
	}
	
	return 0;
}