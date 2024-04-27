#include<stdio.h>
#include<conio.h>
#define max 5
void push();
void pop();
void display();
int tos=-1;
int stack[max];
int item;

void push()
{
	if(tos==max-1)
	{
		printf("full");
	}
	else
	{
		printf("data");
		scanf("%d",&item);
		stack[tos]=item;
		tos++;
		
		printf("item is inserted%d",item);
	}
}
void pop()
{
	if(tos==-1)
	{
		printf("empty");
	}
	else
	{
		tos--;
		item=stack[tos];
		printf("item is deleted",item);
	}
}

void display()
{
	if(tos==-1)
	{
		printf("empty");
	}
	else
	{
		int  i;
		for(i=tos;i>=0;i--)
		{
			printf("%d",stack[tos]);
		}
	}
}
