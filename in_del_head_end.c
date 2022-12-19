#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL;
void insert_at_end(int val)
{
	NODE *nn *temp;
	nn=(NODE *)malloc(sizeof(NODE));
	nn->data=val;
	nn->next=null;
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;
	}
}
int delete_at_end()
{
	int val;
	NODE *temp;
	if(head==NULL)
	{
		return -1;
	}
	if(head->next==NULL)
	{
		val=head->data;
		head=NULL;
		return val;	
	}
	temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	val=temp->next->data;
	temp->next=NULL;
	return val;
}
void display()
{
	NODE *temp;
	if(head==NULL)
	{
		printf("no nodes\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d %d %d\n",temp,temp->data,temp->next);
			temp=temp->next;
		}
		printf("\n");
	}
}
void insert_at_head(int val)
{
	NODE *nn;
	nn=(NODE *)malloc(sizeof(NODE));
	nn->data=val;
	nn->next=NULL;
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		nn->next=head;
		head=nn;
	}
}
int delete_at_head()
{
	NODE *temp;
	int val;
	if(head==NULL)
	{
		return -1;
	}
	if(head->next==NULL)
	{
		val=head->data;
		head=NULL;
		return val;
	}
	temp=head;
	temp=temp->next;
	head->next=NULL;
	val=head->data;
	head=temp;
	return val;
}
void main()
{
	int ch,val;
	while(1)
	{
		printf("1.insert at end 2.delete at end 3.display 4.insert at head 5.delete at head 6.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			insert_at_end(val);
		}
		else if(ch==2)
		{
			val=delete_at_end(val);
			if(val==-1)
			{
				printf("no nodes");
			}
			else
			{
				printf("%d\n",val);
			}
			
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			scanf("%d",&val);
			insert_at_head(val);
		}
		else if(ch==5)
		{
			val=delete_at_head(val);
			if(val==-1)
			{
				printf("no nodes");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else
		{
			break;
		}
	}
}
