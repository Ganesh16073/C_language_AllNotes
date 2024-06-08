#include<stdio.h>
#include<conio.h>
void main(){
int a=0,b,i;
clrscr();
printf("enter a number upto natural no end\n");
scanf("%d",&b);
i=1;
while(i<=b){
a=a++;
i++;
printf("%d\n",a);
}
getch();
}