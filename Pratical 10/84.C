#include<stdio.h>
#include<conio.h>
void main(){
int no,b=10,i=1,sum;
clrscr();
printf("enter the table no ");
scanf("%d",&no);
while(i<=b){
sum=no*i;
printf("\n%d",sum);
i++;
}
getch();
}



