/*Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int m,n;
clrscr();
printf("enter the no \n");
scanf("%d",&m);
m==0 ? printf("n==0") : m<0 ? printf("n==-1") :
m>0 ?printf("n==1") : printf("not exist");
printf("%d",n);
getch();
}