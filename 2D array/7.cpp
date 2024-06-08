#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j,k;
	printf("Enter Matrix for scalar multiplication\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter scalar for multiplication\n");
	scanf("%d",&k);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=a[i][j]*k;
		}
	}
	printf("The scalar matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}