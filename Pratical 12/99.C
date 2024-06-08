#include<stdio.h>
#include<conio.h>
int main(){
int no,fact,i,sum=0,temp,rem;
printf("enter a number");
scanf("%d",&no);
temp=no;
while(no!=0){
rem=no%10;
i=1,fact=1;
while(i<=rem){
fact=fact*i;
i++;
}

sum=sum+fact;
no=no/10;
}
if(sum==temp){

printf("strong num");
}
else{
	printf("not strong");
}
return 0;
}