#include<stdio.h>
#include<conio.h>
int main()
{
	int size,i,j;
	printf("Enter size of array a \n");
	scanf("%d",&size);
	int a[size];
	printf("enter first array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;
			}
		}
		if(a[i]!=-1)
		{
			printf("%d",a[i]);
		}
		
	}
	return 0;
}