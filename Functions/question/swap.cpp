#include<stdio.h>
#include<conio.h>
int main()
{
	void swap(int,int);
	int a,b;
	printf("Enter A and B to swap\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}