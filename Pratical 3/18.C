/* Write a C program swap two number without using third variable. 
*/
#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
printf("enter two digit num");
scanf("%d",&a);
b=a%10;
a=a/10;
printf("the swap of two num is %d%d",b,a);
getch();
}
