#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void last_insert_node();
void last_delete_node();
void display();
void Exit();

struct node
{
	int data;
	struct node *next;
}*start=NULL,*ptr,*temp;

int x;
void last_insert_node()
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
		ptr=ptr->next;
		ptr->data=x;
		ptr->next=NULL;
	}
}
void last_delete_node()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("linked list is Empty");
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
			
		}
		printf("item is deleted %d",ptr->data);
		if(start==ptr)
		{
			start=NULL;
			free(ptr);
		}
		else
		{
			temp->next=NULL;
			free(ptr);
		}
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
	    printf("\n1.Last Insert_Node\n2.Last Delete Node_\n3.Display\n4.Exit\n");
	    printf("enter the choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    		    	case 1:
 				last_insert_node();

 				break;
	    		
	    			case 2:
	    			  last_delete_node();	
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
