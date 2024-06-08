#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	
	struct emp a[5];
	int i,flag=0;
	char sname[10];
	printf("Enter the Id, Name, Salary\n");	//input
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d",&a[i].id,a[i].name,&a[i].sal);
	}
	printf("Enter the Name to find\n");
	scanf("%s",&sname);
	for(i=0;i<5;i++)
	{
		if(strcmp(sname,a[i].name)==0)
		{
			printf("%d\t%s\t%d",a[i].id,a[i].name,a[i].sal);
			flag=1;
		}
	}
	if(!flag)
	{
		printf("Search Name Not found\n");
	}
}