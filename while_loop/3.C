#include<stdio.h>
#include<conio.h>
void main(){
int no,rev=0,rem,i=1;
printf("enter a number");
scanf("%d",&no);
while(no!=0){
rem=no%10;
no=no/10;
rev=rev*10+rem;
}
printf("the rev number is %d",rev);
getch();
}
