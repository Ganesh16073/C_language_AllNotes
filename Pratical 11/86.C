#include<stdio.h>
#include<conio.h>
void main(){
long int no,rem,sum=0;
clrscr();
printf("enter the no") ;
scanf("%ld",&no);
while(no!=0){
rem=no%10;
no=no/10;
sum=sum+rem;
}
printf("the sum of number id %ld",sum);
getch();
}