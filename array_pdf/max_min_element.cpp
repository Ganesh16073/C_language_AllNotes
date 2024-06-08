#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,max,min,temp,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the Array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<5;i++)		//sorting logic
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
	max=a[len-1];
	min=a[0];
	printf("The Max is %d an Min is %d",max,min);
}