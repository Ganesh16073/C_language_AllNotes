#include<stdio.h>
#include<conio.h>
void main(){
int a=1,n,sum=0;
clrscr();
printf("enter upto sum of natural no\n");
scanf("%d",&n);
while(a<=n){
sum=a+sum;
a++;
}
printf("%d",sum);
getch();
}

