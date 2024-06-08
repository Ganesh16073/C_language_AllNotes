#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,max;
	printf("Enter the element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
	}
	printf("Max = %d",max);
}