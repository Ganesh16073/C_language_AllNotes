#include<stdio.h>
#include<conio.h>
int main()
{
	int no,ceil,floor,i,a[5];
	printf("Enter array in sorted order");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number\n");
	scanf("%d",&no);
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
		ceil=-1;
		floor=a[4];
	}
	 printf("\n no= %d ceil =%d and floor =%d",no,ceil,floor);
}