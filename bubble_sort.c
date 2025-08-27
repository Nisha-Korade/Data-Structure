#include<stdio.h>
void bubble_sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	int i,n,a[10];
	printf("How many elements you want=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value=");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	bubble_sort(a,n);	
	printf("\n\nSorted array\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
