#include<stdio.h>
#include<conio.h>
void main(){
int amt,f,h,fy,tw,ten,fiv,two,one;
clrscr();
printf("enter the amount \n");
scanf("%d",&amt);
if(f=amt/500)
printf("500 = %d \n",f);

if(h=(amt%500)/100)
printf("100 = %d \n",h);

if(fy=((amt%500)%100)/50)
printf("50 = %d \n",fy);

if(tw=(((amt%500)%100)%50)/20)
printf("20 = %d \n",tw);

if(ten=((((amt%500)%100)%50)%20)/10)
printf("10 = %d \n",ten);
if(fiv=(((((amt%500)%100)%50)%20)%10)/5)
printf("5 = %d \n",fiv);
if(two=((((((amt%500)%100)%50)%20)%10)%5)/2)
printf("2 = %d \n",two);
if(one=(((((((amt%500)%100)%50)%20)%10)%5)%2)/1)
printf("1 = %d \n",one);




getch();
}
