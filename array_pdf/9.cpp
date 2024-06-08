#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],odd[5],even[5],ind=0,i;
	printf("enter the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			even[i]=a[i];
		}
		if(a[i]%2!=0)
		{
			odd[i]=a[i];
		}
	}
	printf("The even value of array\n");
	for(i=0;i<5;i++)
	{
		printf("Even :%d \t odd :%d\n",even[i],odd[i]);
	}
}

	