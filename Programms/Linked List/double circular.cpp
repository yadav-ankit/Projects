# include<iostream>
# include<stdlib.h>

using namespace std;

struct node
{
	int info;
	struct node *next,*prev;
};

void push(struct node **head_ref,int n)
{
	struct node *p=(struct node *)malloc(sizeof(struct node ));
	struct node *last=*head_ref;
	p->info=n;
	p->next=*head_ref;
	if(*head_ref!=NULL)
	{
		while(last->next!=*head_ref)
		last=last->next;
		last->next=p;
	}
	else
	p->next=p;
	
	p->prev=last;
	*head_ref=p;
	
};

void printList(struct node *head)
{
	struct node *temp=head;
	if(head!=NULL)
	{
		do  
		{
			cout<<temp->info;
			temp=temp->next;
		}while(temp!=head);
	}
}


int main()
{
	struct node *head=NULL;
	  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2); 
  push(&head, 1);    
  printList(head);
 return 0;
}
