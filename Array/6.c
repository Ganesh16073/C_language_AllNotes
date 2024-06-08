#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,len,temp;
	len=sizeof(a)/sizeof(a[5]);
	printf("Enter a Array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Revers of array is\n");
	 for(i=0;i<5;i++)
	{
		temp=a[i];
		a[i]=len;
		len=a[i];
		len--;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	

}