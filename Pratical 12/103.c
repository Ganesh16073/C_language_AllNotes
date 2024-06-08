#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int no,sq=2,sum=0,rem,p,flag=0;
	printf("enter a number");
	scanf("%d",&no);
	while(no){
		rem=no%10;
		no=no/10;
		p=pow(rem,sq);
		sum=sum+p;
		if(no==0)
		{
			no=sum;
		}
		if(no==1){
			flag=1;
		}
		if(flag){
			printf("Happy number");
		}
		else
		printf("not happy number");
		return 0;
		
	}
	
	
}