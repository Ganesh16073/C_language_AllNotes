#include<stdio.h>
#include<conio.h>
int main()
{
	int a[8],i,j,temp,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);	
	}

	for(i=0;i<8;i++)		// logic to move all 0 to last
	{
		if(a[i]==0)
		{
			temp=a[i];
			for(j=i;j<8;j++)
			{
				a[j]=a[j+1];
			}
			a[len-1]=temp;
		}
	}
	printf("After moving 0 to end array is\n");
	for(i=0;i<8;i++)
	{
		printf("%d ",a[i]);
	}
}