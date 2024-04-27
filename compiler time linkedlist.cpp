#include<stdio.h>
#include<conio.h>
struct nodes
{
	int data;
	struct nodes *next;
};
struct nodes *start,node1,node2,node3;
int main()
{
	start=&node1;
	node1.data=10;
	node1.next=&node2;
	node2.data=20;
	node2.next=&node3;
	node3.data=30;
	node3.next=NULL;
	while(start!=NULL)
	{
          printf("Current Address:%d\tData %d\t Next node Address %d\n",start,start->data,start->next);
		start=start->next;
		
	}
	getch();
}

