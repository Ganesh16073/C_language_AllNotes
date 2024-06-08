#include<stdio.h>
#include<conio.h>
int i=1; 			// global decleration
int main()
{
	void fibona(int,int,int);			// function decleration
	int start,second,range;
	start=0;						  // input start 0 is fixed
	printf("Enter Second \n");			// input second
	scanf("%d",&second);
	printf("Enter Range \n");  			// input range
	scanf("%d",&range);
	printf("Serise start from %d %d ",start,second);
	fibona(start,second,range);			// function calling
	return 0;
}
void fibona(int start,int second,int range)
{
	int sum=0;
	if(i<=range)   // checck condition
	{
		sum=start+second;
		printf("%d ",sum);
	}
	start=second;
	second=sum;
	++i;
	fibona(start,second,range);   //recursion callinng
}