#include<stdio.h>
#include<conio.h>
int main(){
	int no,sum=0,square,rem,temp;
	printf("enter a number");
	scanf("%d",&no);
	temp=no;
	square=no*no;
	while(square!=0){
		rem=square%10;
		square=square/10;
		sum=sum+rem;
	}
	if(sum==no){
		printf("neun number");
	}
		else
		printf("it is not neun number");
	return 0;
}