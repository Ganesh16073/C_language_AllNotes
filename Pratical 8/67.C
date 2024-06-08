#include<stdio.h>
#include<conio.h>
void main(){
int s1,s2,s3,s4,s5,tot,per;
clrscr();
printf("enter the marks");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
tot=s1+s2+s3+s4+s5;
per=(tot*100)/500;
printf("percentage is %d",per);
if(per>90)
printf("first division");
else if (per>60)
printf("average");
else
printf("below average");
getch();
}

