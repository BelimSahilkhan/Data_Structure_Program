#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_last_node();
void delete_last_node();
void display();
void Exit();

struct node
{
	int data;
	struct node *next;
}*start=NULL,*ptr;

int x;
void insert_last_node()
{
	printf("enter the Data=>");
	scanf("%d",&x);
	
	if(start==NULL)
	{
		start=(struct node*)malloc(sizeof(struct node));
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
		ptr->next=(struct node*)malloc(sizeof(struct node));
		ptr->data=x;
		ptr->next=NULL;
	}
}
int temp;

void delete_last_node()
{
	if(start==NULL)
	{
		printf("singly linked list Empty.!");
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		printf("Item is Deleted %d",ptr->data);
		temp->next=NULL;
		free(ptr);
	}
}

void display()
{
	if(start==NULL)
	{
		printf("linked list is Empty..!");
	}
	else
	{
		struct node* ptr=start;
		while(ptr!=NULL)
		{
			 printf("Current Address:%u|\tData %d|\t Next node Address %d\n",ptr,ptr->data,ptr->next);
			 ptr=ptr->next;
		}
	}
}
int main()
{
 	int ch;
	do
	{
	    printf("\n1.Insert_Last_Node\n2.Delete_Last_node\n3.Display\n4.Exit\n");
	    printf("enter the choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    		    	case 1:
 				insert_last_node();
 				break;
	    		
	    			case 2:  
		  		delete_last_node();	
    				break;
    				
   			     case 3:
	    			display();
	    			break;
	    			
	    			case 4:
    				getch();
    				break;
    				
	    				    						
	}
	}while(ch!=4);
	getch();
}
