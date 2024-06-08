/*Write a c program to check whether number is even or odd.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int no;
clrscr();
printf("enter the num to find odd or even");
scanf("%d",no);
no%2==0 ? printf("the num is even"): printf("the no is odd");
getch();
}