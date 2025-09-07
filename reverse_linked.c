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
node *reverse(node *h)
{
	node *prev,*cur,*p;
	if(h!=NULL)	
	{
		prev=h;
		cur=h->next;
		h=h->next;
		prev->next=NULL;
		while(h!=NULL)
		{
			h=h->next;
			cur->next=prev;
			prev=cur;
			cur=h;
		}
		h=prev;
	}
	if(h==NULL)
		printf("empty list");
	else
	{
		p=h;
		printf("\n Reverse linked list\n");
		while(p!=NULL)
		{
			printf(" %d ",p->data);
			p=p->next;
		}
	}
}
void print(node *p)
{
	printf(" Linked list\n");
	while(p!=NULL)
	{
		printf(" %d ",(p->data));
		p=p->next;
	}
	printf("\n");
}
int main()
{
	int n;
	node *h;
	printf("Enter the number of nodes=");
	scanf("%d",&n);
	h=create(n);
	print(h);
	reverse(h);
}
