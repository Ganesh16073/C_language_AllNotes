#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct stu{
		int id;
		char name[10];
		int mark;
	}s1,s2;
	
	printf("Enter student 1 : id , stu Name, stu sal\n");
	scanf("%d%s%d",&s1.id,&s1.name,&s1.mark);
	
	
	printf("Enter student 2 : id , stu Name, stu sal\n");
	scanf("%d%s%d",&s2.id,&s2.name,&s2.mark);
	
	printf("\n%d\n %s\n %d",s1.id,s1.name,s1.mark);	
	printf("\n%d\n %s\n %d",s2.id,s2.name,s2.mark);	
}