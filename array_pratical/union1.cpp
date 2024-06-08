#include<stdio.h>
#include<conio.h>
int main()
{
	int size1,size2,size3,i,j,k;
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
	int c[size3];
	//logic
	
	i=0;j=0;
	while(i<size1 && j<size2)
	{
		if(a[size1] < b[size2])
		{
			printf("%d",a[i++]);
		}
		else if(b[size2] < a[size1])
		{
			printf("%d",b[j++]);
		}
		else
		{
			printf("%d",b[j++]);
			i++;
		}
	}
	while(i<size1)
	{
		printf("%d",a[i++]);
	}
	while(j<size2)
	{
		printf("%d",b[j++]);
	}
	return 0;
}