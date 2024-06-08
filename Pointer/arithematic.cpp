#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10,b=20,*ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("Addition of a and b %d\n",*ptr1+*ptr2);
	printf("sub of a and b %d\n",*ptr1-*ptr2);
	printf("mul of a and b %d\n",*ptr1**ptr2);
	printf("div of a and b %d",*ptr1/ *ptr2);
}