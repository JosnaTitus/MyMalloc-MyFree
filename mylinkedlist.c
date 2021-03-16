#include<stdio.h>
#include "mymalloc.h"

struct node
{
	int data;
	struct node *next;
};

struct node* removeFirstNode(struct node* head) 
{ 
    if (head == NULL) 
        return NULL; 
  
    struct node* temp = head; 
    head = head->next; 
  
    MyFree(temp); 
  
    return head; 
} 

struct node *insert(struct node *p,int n)
{
	struct node *temp;
	if(p==NULL)
	{
		p=(struct node *)MyMalloc(sizeof(struct node));
		p->data=n;
		p->next=NULL;
	}
	else
	{
		temp=p;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=(struct node *)MyMalloc(sizeof(struct node));
		temp=temp->next;
		temp->data=n;
		temp->next=NULL;
	}
	return p;
}
void display(struct node *p)
{
	struct node *temp;
	temp=p;
 
	while(temp!=NULL){
		printf("%d	",temp->data);
		temp = temp->next;
	}
}

int main()
{	
	int n;
	int x;
	struct node *star1=NULL;
	
	printf("\n How many elements you want to add in the list:");
	scanf("%d",&n);
	printf("Insert elements:-\n");
	while(n-->0)
	{
	  scanf("%d",&x);
	  star1=insert(star1,x);
	}
	printf("\nThe List is:\n");
	display(star1);
	printf("\nAfter removing the first node in the Linked list. The result is: \n");
	star1 = removeFirstNode(star1);
	display(star1);
	printf("\n");
	return 0;
}
	
	
		
	
