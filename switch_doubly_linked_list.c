#include<stdio.h>
#include<stdlib.h>
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
	p=h;
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
	printf("NULL-> ");
	while(p!=NULL)
	{
		printf("<- %d -> ",p->data);
		p=p->next;
	}
	printf("NULL");
}

node *insert_front(node *h)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	printf("Enter the data=");
	scanf("%d",&p->data);
	p->next=p->prev=NULL;
	if(h==NULL)
		h=p;
	else
	{
		p->next=h;
		h->prev=p;
		h=p;
	}
	return h;
}

node *insert_end(node *h)
{
	node *p,*q=h;
	p=(node *)malloc(sizeof(node));
	printf("Enter the data=");
	scanf("%d",&p->data);
	p->next=p->prev=NULL;
	if(h==NULL)
		h=p;
	else
	{
		while(q->next!=NULL)
			q=q->next;
		q->next=p;
		p->prev=q;
		q=p;
	}
	return h;
}

node *insert_middle(node *h,int pos)
{
	node *p,*q=h,*r;
	int i;
	p=(node *)malloc(sizeof(node));
	printf("Enter the data=");
	scanf("%d",&p->data);
	p->next=p->prev=NULL;
	if(pos==1)
	{
		p->next=h;
		h->prev=p;
		h=p;
	}
	else
	{
		for(i=1;i<pos-1;i++)
			q=q->next;
		r=q->next;
		p->next=r;
		r->prev=p;
		q->next=p;
		p->prev=q;
	}
	return h;
}

node* delete_front(node *h) 
{
	node *p=h;
	if(h->next==NULL)
	{
		free(h);
		h=NULL;
	}
	else
	{
		h=h->next;
		p->next=NULL;
		h->prev=NULL;
		free(p);
	}
	return h;
}

node* delete_end(node *h) 
{
	node *p=h,*q;
	if(h->next==NULL)
	{
		free(h);
		h=NULL;
	}
	else
	{
		while(p->next->next!=NULL)
			p=p->next;
		q=p->next;
		p->next=NULL;
		q->prev=NULL;
		free(q);
	}
	return h;
}

node* delete_middle(node *h,int pos) 
{
	node *q=h,*p;
	int i;
	if(pos==1)
	{
		h=h->next;
		q->next=NULL;
		h->prev=NULL;
		free(q);
	}
	else
	{
		for(i=1;i<pos-1;i++)
			q=q->next;
		p=q->next;
		q->next=p->next;
		p->next->prev=q;
		p->next=NULL;
		p->prev=NULL;
		free(p);
	}
	return h;
}

int main()
{
	int ch,n,s,pos;
	node *h,*f,*m,*e,*df,*dm,*de;
	printf("How many node you want=");
	scanf("%d",&n);
	while(1)
	{
		printf("\n----------- MENU -----------\n");
		printf("\t1) Create\n\t2) Print\n\t3) insert front\n\t4) insert end\n\t5) insert middle\n\t6) delete front\n\t7) delete end\n\t8) delete middle\n\t9) Exit\n");
		printf("Enter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				h=create(n);
				break;
				
			case 2:
				print(h);
				break;
				
			case 3:
				f=insert_front(h);
				print(f);
				break;
				
			case 4:
				m=insert_end(h);
				print(m);
				break;
				
			case 5:
				printf("Enter position=");
				scanf("%d",&pos);
				e=insert_middle(h,pos);
				print(e);
				break;
				
			case 6:
				df=delete_front(h);
				print(df);
				break;
				
			case 7:
				de=delete_end(h);
				print(de);
				break;
			case 8:
				printf("Enter position=");
				scanf("%d",&pos);
				dm=delete_middle(h,pos);
				print(dm);		
				break;
				
			case 9:
				exit(0);
				break;
				
			default:
				printf("Enter valid case\n");
		}
	}
}
