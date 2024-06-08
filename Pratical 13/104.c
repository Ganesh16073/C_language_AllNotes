#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i,j,count;
	printf("enter range of prine number\n");
	scanf("%d",&no);
	for(j=1;j<=no;j++)
	{
	
	count=0;
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
			{
			++count;
			}
		}
	
		if(count==2)
		{
			printf("%d ",j);
		}
	}
	return 0;
}