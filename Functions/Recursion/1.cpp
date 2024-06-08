#include<stdio.h>
#include<conio.h>
int count=1;
int main()
{
	void table(int);
	int no;
	printf("Enter Number for it table\n");
	scanf("%d",&no);
	table(no);
	return 0;
}
void table(int no)
{
	if(count!=11)
	{
		printf("%d * %d = %d\n",count,no,no*count);
		++count;
	}
	table(no);
}