#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
printf("Enter the 3 sides of triangle \n");
scanf("%d%d%d",&a,&b,&c)    ;
if(a+b+c==180){
printf("triangle is valid");
}
else
printf("Not Valid") ;
getch();
}
