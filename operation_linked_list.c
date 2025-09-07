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
	printf("Enter the data=");
	scanf("%d",&(h->data));
	h->next=NULL;
	p=h;
	for(i=1;i<n;i++)
	{
		p->next=(node*)malloc(sizeof(node));
		p=p->next;
		printf("Enter the data=");
		scanf("%d",&(p->data));
		p->next=NULL;
	}
	return h;
}
void print(node *h)
{
	node *p;
	for(p=h;p!=NULL;p=p->next)
		printf("%d-> ",p->data);
	printf("NULL\n\n");
}
void search(node *h,int s)
{
	node *p;
	int f=0,pos=0;
	for(p=h;p!=NULL;p=p->next)
	{
		pos++;
		if(p->data==s)
		{
			printf("%d is found at %d position\n",s,pos);
			f=1;
		}
	}
	if(!f)
		printf("Element is not found\n");
}
node *deletion(node *h,int d)
{
	node *p=h,*q;
	int i;
	if(d==1)
	{
		free(h);
		h=NULL;
	}
	else
	{
		for(i=1;i<d-1;i++)
			p=p->next;	
		q=p->next;
		q->next=p->next;
		q->next=NULL;
		free(q);
	}
	return(h);
}
int main()
{
	int ch,n,s,d;
	node *h;
	printf("How many node you want=");
	scanf("%d",&n);
	while(1)
	{
		printf("----------- MENU -----------\n");
		printf("1) Create\n2) Print\n3) Search\n4) delete node\n5) Exit\n");
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
				printf("Enter the search element=");
				scanf("%d",&s);
				search(h,s);
				break;
			case 4:
				printf("Enter the position of delete node=");
				scanf("%d",&d);
				deletion(h,d);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Enter valid case\n");
		}
	}
}
