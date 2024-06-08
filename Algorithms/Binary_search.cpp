#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,size,l,r,m,skey,temp,flag=0,ind;
	printf("Enter The size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter the array Element\n");
	for(i=0;i<size;i++)					// Input
	{
		scanf("%d",&ptr[i]);
	}
	printf("\nEnter the Search Key\n");
	scanf("%d",&skey);
	for(i=0;i<size;i++)	// Accending order
	{
		for(j=i+1;j<size;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[j];
				ptr[j]=ptr[i];
				ptr[i]=temp;
			}
		}
	}
	for(i=0;i<size;i++)	// Display Accending order
	{
		printf("%d ",ptr[i]);
	}
	m=size/2;
	l=0;
	r=size-1;
	while(skey<=r)			// BINARY SEARCH LOGIC
	{
		if(ptr[m]==skey) // check seaech key with mid
		{
			ind=m;
			flag=1;
			break;
		}
		if(ptr[m]<skey)  // if mid is lessthan skey Increase mid
		{
			ptr[m]=ptr[m+1];
		}
		else if(ptr[m]>skey)  // if mid is greater than skey decrease mid
		{
			ptr[m]=ptr[m-1];
		}
	}
	if(flag)
	{
		printf("Element found in index : %d",ind);
		
	}
	else if(!flag)
	{
		printf("Element Not found");
	}
	
}