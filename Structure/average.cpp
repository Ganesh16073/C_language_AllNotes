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
	int i;
	float sum=0,avg;
	printf("Enter The ID, Name, Salary\n");		// input
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d",&a[i].id,&a[i].name,&a[i].sal);
	}
	printf("The Id, Name, Salary of employee is\n");		// display
	for(i=0;i<5;i++)
	{
		printf("%d\t%s\t%d\n",a[i].id,a[i].name,a[i].sal);
	}
	
	for(i=0;i<5;i++)		// logick  for find average
	{
		sum+=a[i].sal;
	}
	avg=sum/5;
	printf("The Average salary of employe is %f",avg);
}