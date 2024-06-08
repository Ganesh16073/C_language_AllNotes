#include<stdio.h>
#include<conio.h>
int main(){
	int no,i,j,sum;
	printf("enter range to find perfect number\n");
	scanf("%d",&no);
	
	for(j=1;j<=no;j++)
	{
		sum=0;
		for(i=1;i<j;i++)
		{
			if(j%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==j)
		{
			printf("%d\t",j);
		}

	}

return 0;
}