
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,ceil,floor,no;
	printf("Enter the sorted array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
//	printf("Enter number\n");
//	scanf("%d",&no);
	for(no=0;no<10;no++)
	{
		ceil=floor=-1;
		for(i=0;i<5;i++)
		{
			if(a[i]==no)
			{
				ceil=a[i];
				floor=no;
				break;
			}
			else if(no<a[i])
			{
				if(i==0)
				{
					ceil=a[i];
					floor=-1;
				}
				else
				{
					ceil=a[i];
					floor=a[i-1];
				}
				break;
			}
		}
		if(i==5)
		{
			ceil=a[i];
			floor=a[4];
		}
		printf("\n no= %d ceil =%d and floor =%d",no,ceil,floor);
	}
}