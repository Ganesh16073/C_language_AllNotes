/* Write a c program to check whether number is positive or negative or zero.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int no;
printf("enter the number \n");
scanf("%d",&no);
(no>0) ? printf("the number is positive \n") :
 printf("the number is not positive \n");

(no<0) ? printf("the number is negative \n") :
 printf("the number is not negative  \n");

(no==0) ? printf("the number is 0 \n") :
 printf("the number is not 0 \n");
 getch();
 }