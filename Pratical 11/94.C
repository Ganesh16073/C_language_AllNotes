#include<stdio.h>
#include<conio.h>
void main(){
int no,first,last,sum=0;
printf("enter a no\n");
scanf("%d",&no);
last=no;
last=last%10;
first=no;
while(first>=10){
first=first/10;
}
sum=first+last;
printf("the sum of First %d and Last %d is %d ",first,last,sum);
getch();
}