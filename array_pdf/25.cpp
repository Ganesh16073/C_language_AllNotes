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
	printf(" the array\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	dif=a[len-1]-a[0];
	printf("the difference between large %d and smallest %d is %d",a[len-1],a[0],dif);
	
}