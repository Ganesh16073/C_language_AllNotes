#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i,j,count;
	printf("Enter range\n");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				++count;	
			}	
		}
		if(count==2)
			{
				printf("%d ",i);	
			}
	}
	return 0;
}