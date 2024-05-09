#include<stdio.h>
#include<conio.h>
struct link
{
	int data;
	struct link *next;
	struct prevlink *prev;
};
int main()
{
		struct link *start,node1,node2,node3;
		start=&node1;
		node1.prev=NULL;
		node1.data=10;

		node1.next=&node2;
		node2.prev=&node1;
		node2.data=20;

		node2.next=&node3;
		node2.prev=&node2;
		node3.data=30;
		node3.next=NULL;
		while(start!=NULL)
		{
			printf("Prev:%d,current Address:%d,data:%d,next node:%d",start->prev,start->data,start->next);
			start=start->next;
		}
	getch();
}#include<stdio.h>
#include<conio.h>
struct link
{
	int data;
	struct link *next;
	struct prevlink *prev;
};
int main()
{
		struct link *start,node1,node2,node3;
		start=&node1;
		node1.prev=NULL;
		node1.data=10;

		node1.next=&node2;
		node2.prev=&node1;
		node2.data=20;

		node2.next=&node3;
		node2.prev=&node2;
		node3.data=30;
		node3.next=NULL;
		while(start!=NULL)
		{
			printf("Prev:%d,current Address:%d,data:%d,next node:%d",start->prev,start->data,start->next);
			start=start->next;
		}
	getch();
}
