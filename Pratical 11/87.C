#include<stdio.h>
#include<conio.h>
void main(){
long int no,rem,sum=1;
clrscr();
printf("enter a number");
scanf("%ld",&no);
while(no!=0){
rem=no%10;
no=no/10;
sum=sum*rem;
}
printf("the product digit is %ld",sum);
getch();
}
