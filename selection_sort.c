#include<stdio.h>
void search(int a[10],int n)
{
	int i,j,t,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
}
int main()
{
	int a[10],i,n;
	printf("How many elements you want=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value=");
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted element\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	search(a,n);
	printf("\nSorted element\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
