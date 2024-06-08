#include<stdio.h>
#include<conio.h>
int main()
{
	struct book{
		int id;
		char name[20];
		char author[10];
	};
	int i;
	struct book a[2];
	printf("Enter the ID, NAME, AUTHOR\n");
	for(i=0;i<2;i++)
	{
		scanf("%d%s%s",&a[i].id,a[i].name,a[i].author);
	}
	printf("The ID, NAME, AUTHOR is \n");
	for(i=0;i<2;i++)
	{
		printf("%d\t%s\t%s\n",a[i].id,a[i].name,a[i].author);
	}
}