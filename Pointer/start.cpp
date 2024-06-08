#include<stdio.h>
#include<conio.h>
int main()
{
	int a=100,*ptr;
	ptr=&a;
	printf("%u\n",ptr);
	printf("%u\n",*ptr);
	printf("%u\n",&ptr);
	printf("%u\n",a);
	*ptr=600;
	printf("%u\n",a);
	ptr++;
	printf("%u\n",ptr);
	ptr=ptr-2;
	printf("%u\n",ptr);
	*ptr=100100;
	printf("%u\n",&ptr);
	printf("%u\n",*ptr);
}