//if 6 then 1%6=0,2%6=0,3%6=0,4%6!=0,5%6!=0
//           1     + 2  + 3  +  0  +  0  ==6(perfect number)
#include<stdio.h>
#include<conio.h>
void main(){
int no,rem,sum=0,i=1;
clrscr();
printf("enter a no to check no is perfect or not");
scanf("%d",&no);
while(i<no){
if(no%i==0){
sum=sum+i;
}
i++;
}
if(sum==no)
printf("Number is Perfect");
else
printf("number is not perfect");
getch();
}