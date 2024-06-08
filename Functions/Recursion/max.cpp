#include<stdio.h>
#include<conio.h>
int main()
{
	int maxx(int []);
	int a[5];
	printf("Enter the  Array\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int result=maxx(a);
	printf("The maximum number is %d",result);
}
int maxx(int a[])
{
	int max,i;
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}