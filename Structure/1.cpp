#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	}e1;
	printf("Enter Emplo id , emp Name, Emp sal\n");
	scanf("%d%s%d",&e1.id,&e1.name,&e1.sal);
	printf("\n%d\n %s\n %d",e1.id,e1.name,e1.sal);	
}