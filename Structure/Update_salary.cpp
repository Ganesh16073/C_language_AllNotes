#include<stdio.h>
#include<conio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp a[5];
	int i,asal;
	printf("enter the Id, Name, Salary\n");
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d",&a[i].id,a[i].name,&a[i].sal);
	}
	
	printf("The Id, Name, Salary of employee is\n");		// display
	for(i=0;i<5;i++)
	{
		printf("%d\t%s\t%d\n",a[i].id,a[i].name,a[i].sal);
	}
	printf("Enter thee Amount to increase Salary for every employe\n");
	scanf("%d",&asal);
	
	for(i=0;i<5;i++)
	{
		a[i].sal=a[i].sal+asal;
	}
	printf("The Id, Name, Updated_Salary of employee is\n");		// display
	for(i=0;i<5;i++)
	{
		printf("%d\t%s\t%d\n",a[i].id,a[i].name,a[i].sal);
	}
}