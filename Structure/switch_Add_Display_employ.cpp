#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int size,count=0;
struct emp{
	int id,sal;
	char name[10],email[20];
	int con;
};
void addrecord(struct emp*);
void displayrecord(struct emp*);
void searchid(struct emp*);
void updatename(struct emp*);
void deleteemail(struct emp*);
void displaycount(struct emp*);
main()
{
	struct emp *e;
	int i,choice,x=1;
	printf("Enter the No of Employee to add\n");
	scanf("%d",&size);
	e=(struct emp*)malloc(sizeof(struct emp)*size);
	printf("1: ADD the record\n2: Display the record\n3: Search Employ by Id\n4: Update Employ by Name\n5: DElete Employ by Email\n5: Display list count of the Employee \n10: Exit");
	do{
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				addrecord(e);
				break;
			case 2:
				displayrecord(e);
				break;
			case 3:
				searchid(e);
				break;	
			case 4:
				updatename(e);
				break;
			case 5:
				deleteemail(e);
				break;
			case 6:
				displaycount(e);
				
			case 10:
				x=2;
				printf("Exited\n");
				break;
			default:
				printf("Wrong choice\n");
				
		}
	}while(x==1);
}

void addrecord(struct emp *e)	// case 1
{
	if(count==size)
	{
		printf("The size is full\n");
	}
	else
	{
		printf("Enter the ID, Salary, Name, Email, Contact Number\n");
		scanf("%d%d%s%s%d",&e[count].id,&e[count].sal,&e[count].name,&e[count].email,&e[count].con);
		count++;
	}
}

void displayrecord(struct emp *e)	//case 2
{
	for(int i=0;i<count;i++)
	{
		printf("Id :%d\tSal :%d\tName :%s\tEmail :%s\tContact : %d\n",e[i].id,e[i].sal,e[i].name,e[i].email,e[i].con);
	}
	if(count==0)
	{
		printf("NO Data Available\n");
	}
}

void searchid(struct emp *e)	// case 3
{
	int sid,flag=0;
	printf("Enter search id\n");
	scanf("%d",&sid);
	for(int i=0;i<=count;i++)
	{
		if(sid==e[i].id)
		{
			printf("Id :%d\tSal :%d\tName :%s\tEmail :%s\tContact : %d\n",e[i].id,e[i].sal,e[i].name,e[i].email,e[i].con);
			flag=1;
		}
		if(!flag)
		{
			printf("Id Not Found\n");
		}
	}
}

void updatename(struct emp *e)
{
	int ind,idd,sall,conn;
	char emaill[20],namee[10];
	char sname[10];
	printf("Enter Name you want to update\n");
	scanf("%s",&sname);
	for(int i=0;i<count;i++)
	{
		if(strcmp(e[i].name,sname)==0)
		{
			ind=i;
			printf("enter Id, Salary, Name, Email, Contact\n");
			scanf("%d%d%s%s%d",&idd,&sall,&namee,&emaill,&conn);
			
			e[ind].id=idd;
			e[ind].sal=sall;
			strcpy(e[ind].name,namee);
			strcpy(e[ind].email,emaill);
			e[ind].con=conn;	
			printf("Id :%d\tSal :%d\tName :%s\tEmail :%s\tContact : %d\n",e[ind].id,e[ind].sal,e[ind].name,e[ind].email,e[ind].con);

		}
		else
		{
			printf("name not found");
		}
	}	
}

void deleteemail(struct emp *e)
{
	char semail[20];
	printf("Ehter the email to delete\n");
	scanf("%s",&semail);
	for(int i=0;i<count;i++)
	{
		if(strcmp(semail,e[i].email)==0)
		{
			for(int j=i;j<=count;j++)
			{
				for(int k=j+1;k<=count;k++)
				{
					e[j].id=e[k].id;
					e[j].sal=e[k].sal;
					strcpy(e[j].name,e[k].name);
					strcpy(e[j].email,e[k].email);
					e[j].con=e[k].con;
				}
			}
			--count;
			printf("Data Deleted\n");
		}
		else
		{
			printf("Email Not found\n");
		}
	}	
}

void displaycount(struct emp *e)
{
	printf("The list count of the Employee is %d",count);
}