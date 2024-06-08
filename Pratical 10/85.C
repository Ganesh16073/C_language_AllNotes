#include<stdio.h>
#include<conio.h>
void main(){
long int no,count=0;
clrscr();
printf("enter the number\n");
scanf("%ld",&no);
while(no!=0)
{
 no=no/10;
 count++;
}
printf("count is %ld",count);
getch();
}
