#include<stdio.h>
void search(int a[10],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=a[i];
		for(j=i-1;j>=0 && a[j]>t;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=t;
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
