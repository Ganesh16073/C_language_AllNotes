#include<stdio.h>
#include<conio.h>
int main()
{
	void duck(int);
	int no;
	printf("Enter range to find duck number\n");
	scanf("%d",&no);
	duck(no);
	return 0;
}
void duck(int no)
{
	int i,flag,rem,temp;
	for(i=1;i<=no;i++)
	{
		flag=0;
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			if(rem==0)
			{
				flag=1;
				break;
			}	
			temp=temp/10;
		}
		if(flag)
		{
			printf("%d ",i); 
		}
	}
}