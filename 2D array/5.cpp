#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],trn[3][3],i,j;
	printf("enter matrix to transpose\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			trn[j][i]=a[i][j];
		}
	}
	printf("the transpose of matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",trn[i][j]);
		}
		printf("\n");
	}
}