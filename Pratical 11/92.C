#include<stdio.h>
#include<conio.h>
void main(){
int no,i=1,f;
clrscr();
printf("enter a number to find its factor\n");
scanf("%d",&no);
while(i<=no){
if(no%i==0){
printf("%d ",i);
}
i++;
}
getch();
}


