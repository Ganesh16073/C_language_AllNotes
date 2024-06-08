#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr,a=10,b=20,temp;
	printf("the no to swap%d & %d\n",a,b);
	ptr=&b;
	temp=a;
	a=*ptr;
	*ptr=temp;
	printf("the no after swap%d & %d\n",a,b);
//	a=(*ptr+a)-a;  //20+10-10;
//	ptr=&a;
//	b=(*ptr+temp)-b; //20+10-20;
	printf("the no after swap%d & %d\n",a,b);
}
	
	
	