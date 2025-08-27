#include<stdio.h>
void sort(int a[10],int f,int l)
{
	int i,j,t,pv;
	if(f<l)
	{
		pv=f;
		i=f;
		j=l;
		while(i<j)
		{
			while(a[i]<=a[pv] && i<j)
				i++;
			while(a[j]>a[pv])
				j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[pv];
		a[pv]=t;
		sort(a,0,j-1);
		sort(a,j+1,l);
	}
}
int main()
{
	int a[10],i,n;
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
