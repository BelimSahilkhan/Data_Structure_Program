#include<stdio.h>
#include<conio.h>
void selection_sort(int a[],int size);
int main()
{
	int a[100];
	int no;
	int i;
	printf("Enter the no of element array:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(a,no);
	for(i=0;i<no;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
void selection_sort(int a[],int size)
{
	int min,i,j,temp;
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
	           if(a[j]<a[min])
	           {
	           	min=j;
			 }
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
