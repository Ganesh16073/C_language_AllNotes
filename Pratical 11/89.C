#include<stdio.h>
#include<conio.h>
void main(){
int no,temp,rem,rev=0;
clrscr();
printf("enter num to check palindrome\n");
scanf("%d",&no);
temp=no;
while(no!=0){
rem=no%10;
no=no/10;
rev=rev*10+rem;
}
if(rev==temp){
printf("number is Palindrome");
}
else
printf("number is not palindrome");
getch();
}