#include<stdio.h>
#include<conio.h>
#define max 5
int rear=-1,front=-1,queue[max],item;
void enquee();
void dequee();
void display();
int main()
{
	int ch;
	do
	{
	    printf("\n1.Enquee\n2.Dequeue\n3.Display\n");
	    printf("enter the choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    		    	case 1:
 				enquee();
 				break;
	    		
   			     case 2:
	    			dequee();
	    			break;
	    			
	    			case 3:
    				display();
    				break;
	    				    						
	}
	}while(ch!=4);
	getch();
}
void enquee()
{
	if(rear==max-1)
	{
		printf("\nQueue is full!\n");
	}
	else
	{
		if(rear==-1 && front==-1)
		{
			rear=0;
			front=0;
			//
		}
		else
		{
			rear++;
		}
	
	     printf("enter the item:");
          scanf("%d",&item);
	     queue[rear]=item;
      	printf("\n\nitem inserted :%d\n",item);
	}
}
void dequee()
{
	if(front==-1)
{
	printf("\nQueue is empty");
	
}
else
{
	item=queue[front];
	if(front==rear)
	{
		printf("\nitem deleted is:%d",item);
		front=-1;
		rear=-1;
	}
	else
	{
		front++;
	
	}
}
}
void display()
{
	if(front==-1)
	{
		printf("Qeue is empty");
	}
	else
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
