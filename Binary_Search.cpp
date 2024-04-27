#include<stdio.h>
#include<conio.h>
int binary_search(int a[],int beg,int end,int val)
{
	int mid;
	if(end>=beg)
	{
		mid=(beg+end)/2;
		if(a[mid]==val)
		{
			return mid;
		}
		else if(a[mid]<val)
		{
			return binary_search(a,mid+1,end,val);
		}
		else
  		{
  			return binary_search(a,beg,mid-1,val);
		}
	}
	return -1;
}
int main()
{
	int a[]={5,10,15,20,25};
	int key=25;
	int n=5;
	int res=binary_search(a,0,n-1,key);
	if(res==-1)
	{
		printf("false");
	}
	else
	{
		printf("true");
	}
	getch();
}
