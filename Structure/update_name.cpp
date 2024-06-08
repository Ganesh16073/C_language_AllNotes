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
	int i,sid;
	char uname[10];
	printf("Enter the Id, Name, Salary\n");
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d",&a[i].id,a[i].name,&a[i].sal);
	}
	printf("Enter the id to update name\n");
	scanf("%d",&sid);
	printf("Enter the Update\n");
	scanf("%s",&uname);
	
	for(i=0;i<5;i++)
	{
		if(a[i].id==sid)
		{
			a[i].name=auname;
		}
	}
}