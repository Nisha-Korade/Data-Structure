#include<stdio.h>
int search(int a[20],int n,int t)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		{
			return i;
		}
	}
	return -1;
		
}
void main()
{
	int i,n,a[20],p,t;
	printf("How many elements you want=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\nEnter the search number=");
	scanf("%d",&t);
	p=search(a,n,t);
	if(p!=1)
		printf("Element not found\n");
	else
		printf("Element found at %d position\n",p+1);
}
