#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j,k,rsum=0,csum=0;
	printf("Enter the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The row sum is\n");
	for(i=0;i<3;i++)          // logic  for  row sum
	{
		rsum=0;
		for(j=0;j<3;j++)
		{
			rsum=rsum+a[i][j];		
		}
			printf("%d row sum is =%d\n",i+1,rsum);
	}
	printf("The colume sum is\n");
	for(i=0;i<3;i++)			// logic  for  coloum sum
	{
		csum=0;
		for(j=0;j<3;j++)
		{
			csum=csum+a[j][i];
		}
		printf("%d colume sum is =%d\n",j+1,csum);
	}
}