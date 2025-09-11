#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next,*prev;
}node;
node *create(int n)
{
	node *p,*h=NULL,*q;
	int i;
	q=h;
	for(i=0;i<n;i++)
	{
		q=(node *)malloc(sizeof(node));
		printf("Enter the data=");
		scanf("%d",&(q->data));
		q->next=q->prev=NULL;
		if(h==NULL)
			p=h=q;
		else
		{
			p->next=q;
			q->prev=p;
			p=q;
		}
	}
	return h;
}
void print(node *h)
{
	node *p=h;
	while(p!=NULL)
	{
		printf(" %d ",p->data);
		p=p->next;
	}
}
int main()
{
	int n;
	node *s;
	printf("How many nodes you want=");
	scanf("%d",&n);
	s=create(n);
	print(s);
}
