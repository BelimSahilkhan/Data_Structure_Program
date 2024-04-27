#include<stdio.h>
#include<conio.h>
#define max 5
void push();
void pop();
void display();
void peek();
int tos=-1,stack[max],item;
int main()
{
	int ch;
	do
	{
	    printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n");
	    printf("enter the choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    		    	case 1:
 				push();
 				break;
	    		
   			     case 2:
	    			pop();
	    			break;
	    			
	    			case 3:
    				display();
    				break;
	    				
    				case 4:
				peek();
				break;
	    					
				case 5:
				getch();
				break;
	    }		
	}while(ch!=4);
	getch();
}
void push()
{
	if(tos==max-1)
	{
		printf("\n\n stack is full!");
		
	}
	else
	{
		printf("enter the item");
		scanf("%d",&item);
		tos++;
		stack[tos]=item;
		printf("item is inserted:%d",item);
		
	}
}
void pop()
{
	if(tos==-1)
	{
		printf("stack is empty");
	}
	else
	{
		item=stack[tos];
		tos--;
		printf("item deleted:%d",item);
	}
}
void display()
{
	int i;
	if(tos==-1)
	{
		printf("stack is empty");
	}
	else
	{
		for(i=tos;i>=0;i--)
		{
		 			    printf("%d",stack[tos]);
		}
	}
}
void peek()
{
	if(tos==-1)
	{
		printf("stack is empty");
		
	}
	else
	{
		printf("%d",stack[tos]);
	}
}
