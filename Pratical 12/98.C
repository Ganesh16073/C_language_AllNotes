#include<stdio.h>
#include<conio.h>
void main(){
int no,flag=0,rem;
clrscr();
printf("enter a number");
scanf("%d",&no);
while(no!=0){
rem=no%10;
no=no/10;
if(rem==0){
flag=1;
break;
}
}
if(flag){
printf("num is duck");
}
else     {
printf("num is not duck");
}
getch();
}