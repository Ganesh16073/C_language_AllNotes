#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,a[5],i,j,temp,rem,sum=0,odd[5],even[5],ind=0;
	printf("The options are :-\n");
	printf("1 : For sort number in Ascending order\n");
	printf("2 : For sort number in Decending order\n");
	printf("3 : for sum of Digits\n");
	printf("4 : to store even number at first and odd number at end.\n");
	printf("5 : Store only prime number at the same index of digit.\n");
	printf("Enter option : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		 printf("Enter the array to sort array in Accending order\n");
		 for(i=0;i<5;i++)
		 {
		 	scanf("%d",&a[i]);
		 }
		 for(i=0;i<5;i++)
		 {
		 	for(j=i+1;j<5;j++)
		 	{
		 		if(a[i]>a[j])
				 {
				 	temp=a[i];
				 	a[i]=a[j];
				 	a[j]=temp;
				 }	
			}
		 }
		 printf("Sorted in Accending order\n");
		 for(i=0;i<5;i++)
		 {
		 	printf("%d ",a[i]);
		 }
	     break;
	      
	    case 2:
		 printf("Enter the array to sort array in decending order\n");
		 for(i=0;i<5;i++)
		 {
		 	scanf("%d",&a[i]);
		 }
		 for(i=0;i<5;i++)
		 {
		 	for(j=i+1;j<5;j++)
		 	{
		 		if(a[i]<a[j])
				 {
				 	temp=a[i];
				 	a[i]=a[j];
				 	a[j]=temp;
				 }	
			}
		 }
		 printf("Sorted in decending order\n");
		 for(i=0;i<5;i++)
		 {
		 	printf("%d ",a[i]);
		 }
	     break;
		
		case 3:
			printf("Enter array to sum of digits\n");
			for(i=0;i<5;i++)
			{
		 		scanf("%d",&a[i]);
		 	}
		 	for(i=0;i<5;i++)
		 	{
		 		sum=0;
		 		temp=a[i];
		 		while(temp!=0)
		 		{
		 			rem=temp%10;
		 			sum=sum+rem;
		 			temp=temp/10;
				}
		 		printf("%d ",sum);		
			}
			break;
			
		case 4:
			printf("enter array to print even number first and then odd number");
			for(i=0;i<5;i++)
			{
		 		scanf("%d",&a[i]);
		 	}
		 
		 	for(i=0;i<5;i++)
		 	{
		 		temp=a[i];
		 		while(temp!=0)
		 		{
		 			rem=temp%10;	
		 			if(rem%2==0)
		 			{
		 				even[ind]=rem;
		 				ind++;
					}
					temp=temp/10;
				}
			}
			for(i=0;i<5;i++)
		 	{
		 		temp=a[i];
		 		while(temp!=0)
		 		{
		 			rem=temp%10;
		 			if(rem%2==1)
		 			{
		 				odd[ind]=rem;
		 				ind++;
					}
					temp=temp/10;
				}		
			}
			for(i=0;i<5;i++)
			{
				printf("%d",even[i]);
				printf("%d ",odd[i]);
			}
			
			break;
		
	}
	
	
	
	return 0;
}