#include<stdio.h>
#include<conio.h>
int main(){
	int no,rem,temp,product=1,sum=0;
	printf("enter a number");
	scanf("%d",&no);
	temp=no;
	while(no!=0){
		rem=no%10;
		no=no/10;
		sum=sum+rem;
	}
	no=temp;
	while(no!=0){
		rem=no%10;
		no=no/10;
		product=product*rem;
	}
	if(sum==product){
		printf("it is spy number");
	}
	else
	printf("number is not spy");
	return 0;
}
