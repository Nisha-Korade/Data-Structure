#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *create(int n)
{
	node *h,*p;
	int i;
	h=(node*)malloc(sizeof(node));
	scanf("%d",&(h->data));
	h->next=NULL;
	p=h;
	for(i=1;i<n;i++)
	{
		p->next=(node*)malloc(sizeof(node));
		p=p->next;
		scanf("%d",&(p->data));
		p->next=NULL;
	}
	return(h);
}
void print(node *p)
{
	while(p!=NULL)
	{
		printf(" %d ",(p->data));
		p=p->next;
	}
}
int main()
{
	int n;
	node *h;
	printf("Enter the number of nodes=");
	scanf("%d",&n);
	h=create(n);
	print(h);
}
