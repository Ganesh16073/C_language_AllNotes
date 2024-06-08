#include<stdio.h>
#include<conio.h>
void main(){
int a=1,n,sum=0;
clrscr();
printf("enter no to find sum of even no\n");
scanf("%d",&n);
while(a<=n){
	if(a%2==0){
	sum=sum+a;
	}
	a++;
	}
printf("the sum of number is %d",sum);
getch();
}
