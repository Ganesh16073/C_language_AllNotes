#include<stdio.h>
#include<conio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	int i,j,did,count=0;
	struct emp a[5];
	printf("Enter The Id, Name, Salary\n");
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d",&a[i].id,a[i].name,&a[i].sal);
	}
	printf("Enter the Id, Name, Salary\n");	// Display
	for(i=0;i<5;i++)
	{
		printf("%d\t%s\t%d\n",a[i].id,a[i].name,a[i].sal);
	}
	printf("Enter the id to Delete\n");
	scanf("%d",&did);
	for(i=0;i<5;i++)
	{
		if(a[i].id==did)
		{
			++count;
			for(j=i;j<5;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	printf("The Id, Name, Salary of employee is\n");	//input
	for(i=0;i<5-count;i++)
	{
		printf("%d\t%s\t%d\n",a[i].id,a[i].name,a[i].sal);
	}
}