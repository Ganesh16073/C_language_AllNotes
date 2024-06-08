#include<stdio.h>
#include<conio.h>
int main()
{
	int size1,size2,size3,i,j,k,flag;
	printf("Enter size of array a \n");
	scanf("%d",&size1);
	int a[size1];
	printf("enter first array\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter size of array b\n ");
	scanf("%d",&size2);
	int b[size2];
	printf("enter second array\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&b[i]);
	}
	size3=size1+size2;
	int uni[size3];
	int ind=0;
	//logic
	for(i=0;i<size1;i++)
	{
		uni[ind]=a[i];
		ind++;
	}
	for(i=0;i<size3;i++)
	{
		flag=0;
		for(j=0;j<size2;j++)
		{
			if(b[i]==a[i])
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			uni[ind]=b[i];
			ind++;
		}
	}
	
printf("\n union of array is== ");
	for(i=0;i<size3;i++)
	{
		printf("%d\n",uni[i]);
	}
	return 0;
}