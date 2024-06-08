#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("enter a num to check odd or even \n");
scanf("%d",&a);
if(a%2==0){
printf("Even");
}
else{
printf("Odd");
}
getch();
}
