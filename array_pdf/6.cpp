#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,temp,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter a array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;

//			temp=a[i];
//			a[i]=len;
//			len=a[i];
//			len--;
//			
		}
	}
	printf("revers of a array");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}