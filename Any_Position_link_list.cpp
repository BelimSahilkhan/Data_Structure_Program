#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*start=NULL,*ptr,*tmp,*prev,*temp;

int x;

void insert_first()
{
	printf("Enter the Data:");
	scanf("%d",&x);
	if(start==NULL)
	{
		start=(struct Node*)malloc(sizeof(struct Node));
		start->data=x;
		start->next=NULL;
	}
	else
	{
		ptr=start;
		start=(struct Node*)malloc(sizeof(struct Node));
		start->data=x;
		start->next=ptr;
	}
}

void insert_last()
{
	printf("\nEnter the Data:");
	scanf("%d",&x);
	if(start==NULL)
	{
		start=(struct Node*)malloc(sizeof(struct Node));
		start->data=x;
		start->next=NULL;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=(struct Node*)malloc(sizeof(struct Node));
		ptr=ptr->next;
		ptr->data=x;
		ptr->next=NULL;
	}
}

void insert_any_position()
{
	int c,n;
	printf("\nEnter new element:");
	scanf("%d",&n);
	printf("Where after you insert element:");
	scanf("%d",&c);
	tmp=(struct Node*)malloc(sizeof(struct Node));
	tmp->data=n;
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->data==c)
		{
			tmp->next=ptr->next;
			ptr->next=tmp;
		}
		ptr=ptr->next;
	}
}

void delete_first()
{
	if(start==NULL)
	{
		printf("\nThis is empty!!!");
	}
	else
	{
		ptr=start;
		start=start->next;
		printf("\nDeleted item %d",ptr->data);
		free(ptr);
	}
}

void delete_last()
{
	if(start==NULL)
	{
		printf("\nThis is empty!!!");
	}
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("\n Current Address: %d \t Data: %d \t Next Node Address: %d",ptr,ptr->data,ptr->next);
			ptr=ptr->next;
		}
	}
}

void delete_any_position()
{
	int data;
	printf("Enter the data you want to delete:");
	scanf("%d",&data);
	
	temp=start;
	prev=NULL;
	while(temp!=NULL && temp->data!=data)
	{
		prev=temp;
		temp=temp->next;
	}
	
	if(temp==NULL)
	{
		printf("\nNot found!!!");
		return;
	}
	
	if(prev==NULL)
	{
		start=temp->next;
	}
	else
	{
		prev->next=temp->next;
	}
	
	free(temp);
	printf("\nItem deleted : %d",data);
}

void display()
{
	if(start==NULL)
	{
		printf("\nThis is empty!!!");
	}
	else
	{
		tmp=start;
		while(tmp!=NULL)
		{	
			printf("Current Address: %d\tData: %d\tNext Node Address: %d\n",tmp,tmp->data,tmp->next);
			tmp=tmp->next;
		}
	}
}

int main()
{
	int ch;
	do
	{
		printf("\n\n1.Insert First\n2.Insert Last\n3.Insert Any Position\n4.Delete First\n5.Delete Last\n6.Delete Any Position\n7.Display\n8.Exit\n");
		printf("Enter the Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_first();
			break;
			
			case 2:
				insert_last();
			break;
			
			case 3:
				insert_any_position();
			break;
			
			case 4:
				delete_first();
			break;
			
			case 5:
				delete_last();
			break;
			
			case 6:
				delete_any_position();
			break;
			
			case 7:
				display();
			break;
			
			case 8:
				getch();
			break;
			
			default:
				printf("Invalid Choice!!!");
		}
	}while(ch!=8);
	getch();
}
