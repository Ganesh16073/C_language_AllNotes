#include<stdio.h>
#include<conio.h>
int main(){
int no,fact,i,sum=0,temp,rem,j;
printf("enter a number");
scanf("%d",&no);
for(j=1;j<=no;j++)
{
temp=no;
sum=0;
while(j!=0){
rem=j%10;
i=1,fact=1;
while(i<=rem){
fact=fact*i;
i++;
}
sum=sum+fact;
i=i/10;
}
}
if(sum==temp){
printf("strong num");
}
else{
	printf("not strong");
}
return 0;
}