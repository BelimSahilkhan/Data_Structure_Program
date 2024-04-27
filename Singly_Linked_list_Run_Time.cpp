#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void first_insert_node();
void delete_first_node();
void display();
void Exit();

struct node
{
	int data;
	struct node *next;
}*start=NULL,*ptr;

int x,temp;
void first_insert_node()
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
		start=(struct node*)malloc(sizeof(struct node));
		start->data=x;
		start->next=ptr;
	}
}

void delete_first_node()
{
	if(start==NULL)
	{
		printf("singly linked list Empty.!");
	}
	else
	{
		ptr=start;
		printf("%d\n",ptr);
		start=start->next;
		//printf("Address Deleted:\n",start);
		printf("item is deleted:%d\n",ptr->data);
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
			 printf("Current Address:%d|\tData %d|\t Next node Address %d\n",ptr,ptr->data,ptr->next);
			 ptr=ptr->next;
		}
	}
}
int main()
{
 	int ch;
	do
	{
	    printf("\n1.First_Insert_Node\n2.Delete_First\n3.Display\n4.Exit\n");
	    printf("enter the choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    		    	case 1:
 				first_insert_node();
 				break;
	    		
	    			case 2:
	    			 delete_first_node();	
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
