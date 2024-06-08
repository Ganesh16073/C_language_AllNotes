/* Write a C program swap two number using third variable.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("enter 2 digit number \n");
scanf("%d",&a);
c=a%10;
b=a/10;
printf("the swap of 2 num is %d%d \n",c,b);
getch();
}
