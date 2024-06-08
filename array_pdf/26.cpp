#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,temp,dif,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter specific difference"); //count all distinct pairs for a specific difference
	scanf("%d",&dif);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]-a[j]==dif)
			{
				printf("(%d,%d) ",a[i],a[j]);
			}
		}
	}
}