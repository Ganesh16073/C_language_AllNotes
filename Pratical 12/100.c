#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int no,count=0,rem,p=0,sum=0,temp;
	printf("enter the number");
	scanf("%d",&no);
	temp=no;
	while(no!=0){
		rem=no%10;
		no=no/10;
		count++;
	}
	no=temp;
	while(no!=0){
	rem=no%10;
	no=no/10;
	p=pow(rem,count);
	sum=sum+p;
    }
    no=temp;
    if(sum==no)
    printf("the armstrong number");
    else
    printf("not armstrong");
    return 0;
}