#include<stdio.h>
#include<conio.h>
void main(){
int a=1,n,sum=0;
clrscr();
printf("enter num upto sum of odd number\n");
scanf("%d",&n);
while(a<=n){
	if(a%2==1){
	sum=sum+a;
	}
	a++;
  }
  printf("%d",sum);
  getch();
  }

