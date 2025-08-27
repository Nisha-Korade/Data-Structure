#include<stdio.h>
int sort(int a[10],int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
		sort(a,l,mid);
		sort(a,mid+1,h);
		merge(a,l,mid,h);
	}	
}
int merge(int a[10],int l,int mid ,int h)
{
	int i,k,b[10],j;
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid&&j<=h)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid)
	{
		while(j<=h)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(i=l;i<=h;i++)
		a[i]=b[i];
}
int main()
{
	int i,n,a[10];
	printf("How many element you want=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value=");
		scanf("%d",&a[i]);
	}
	sort(a,0,n-1);
	printf("\nSorted array\n");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
}
