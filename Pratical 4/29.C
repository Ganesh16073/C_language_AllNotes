/*Write a C program to input cost price and selling price of a product and check profit or loss.*/
#include<stdio.h>
#include<conio.h>
void main(){
int costp,sellp,diff;
clrscr();
printf("enter cost of product \n");
scanf("%d",&costp);
printf("enter selling price of product \n");
scanf("%d",&sellp);
diff=sellp-costp;
diff>0 ? printf("it is profit %d Rs",diff) : printf("it is loss %d Rs",diff);
getch();
}

