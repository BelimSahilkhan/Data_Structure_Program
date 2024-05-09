#include<stdio.h>
#include<conio.h>

int pratition(int a[],int start,int end)
{
	int pivot=a[start],i=start,temp,j;
	for(j=start+1;j<=end;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[start];
	a[start]=a[i];
	a[i]=temp;
	return i;
	
}
void quick_sort(int a[],int low,int high)
{
	if(low<high)
	{
		int i=pratition(a,low,high);
		quick_sort(a,low,i-1);
		quick_sort(a,high,i+1);
	}
}
int main()
{
	int a[10];
	int no;
	printf("Enter the no");
	scanf("%D",&no);
	int i;
	printf("enter the no:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		scanf("%d\n",&a[i]);
	}
	quick_sort(a,0,no-1);
		for(i=0;i<no;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	
}