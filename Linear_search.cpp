#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={5,10,15,20,25};
	int i,key,sum=0;
	printf("enter the key element:");
	scanf("%d",&key);
 	for(i=0;i<5;i++)
 	{
 	 	if(a[i]==key)
		{
  		     sum=1;	
               break;
	     }
		else
		{
			sum=0;
		}
	}
		if(sum==1)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	getch();
}
