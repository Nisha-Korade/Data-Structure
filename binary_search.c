#include<stdio.h>
int search(int a[20],int t,int low,int high)
{
	int mid,f=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(t<a[mid])
		{
			high=mid-1;
		}
		else if(t>a[mid])
		{
			low=mid+1;
		}
		else if(t==a[mid])
		{
			printf("Element is found at location=%d",mid);
			f=1;
			break;
		}
	}
	if(!f)
			printf("Element is not found");
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
	search(a,t,0,n-1);
}
