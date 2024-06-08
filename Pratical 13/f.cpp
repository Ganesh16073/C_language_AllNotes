#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i=1,rem,fact=1,sum=0;
	printf("enter num");
	scanf("%d",&no);
	while(i>=no)
	{
		fact=fact*i;
		sum=sum+fact;
	}
	
	printf("%d",sum);
	return 0;
}