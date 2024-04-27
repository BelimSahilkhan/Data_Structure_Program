#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int size);
int main()
{
	int a[100];
	int i;
	int no;
	printf("Enter the no of element:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,no);
	for(i=0;i<no;i++)
	{
		printf("%d\n",a[i]);
		printf("\nsorted\n");
	}
	getch();
}
void bubble_sort(int a[],int size)
{
	printf("\nsorted\n");
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j]+a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
