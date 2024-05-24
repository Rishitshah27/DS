#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *lptr;
	struct Node *rptr;
}*start;

void finsert();
void linsert();
void fdelete();
void ldelete();
void display();
void sdelete();

void main()
{
	int ch;
	while(1)
	{
		printf("\n 1.insert at first \n 2.insert at last");
		printf("\n 3.delete at first \n 4.delete at last");
		printf("\n 5.display  \n6.delete at specific pos\n 7.exit");
		printf("\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:finsert(); break;
			case 2:linsert(); break;
			case 3:fdelete(); break;
			case 4:ldelete(); break;
			case 5:display(); break;
			case 6:sdelete(); break;
			case 7:exit(0);
		}
	}
}

void finsert()
{
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	printf("enter data:");
	scanf("%d",&n->data);
	n->lptr=NULL;
	n->rptr=NULL;
	if(start==NULL)
	{
		start=n;
	}
	else
	{
		n->rptr=start;
		start->lptr=n;
		start=n;
	}
	display();
}

void linsert()
{
	struct Node *temp;
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	printf("enter data:");
	scanf("%d",&n->data);
	n->lptr=NULL;
	n->rptr=NULL;
	if(start==NULL)
	{
		start=n;
	}
	else
	{
	    temp=start;
	    while(temp->rptr!=NULL)
	    {
	    	temp=temp->rptr;
		}
			temp->rptr=n;
	    	n->lptr=temp;
	    
	}
	display();
}
void display()
{
	struct Node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->rptr;
	}
}
void fdelete()
{
	struct Node *temp;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
	   temp=start;
	   start=start->rptr;
	   start->lptr=NULL;
	   free(temp);	
	}
	display();
}
void ldelete()
{
	struct Node *temp;
	struct Node *pre;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		pre=start;
		temp=start;
		while(temp->rptr!=NULL)
		{
			pre=temp;
			temp=temp->rptr;
		}
		pre->rptr=NULL;
		free(temp);
	}
	display();
}

void sdelete()
{
	   struct Node *temp;
	   struct Node *pre;
	   struct Node *post;
	   int value;
	   if(start==NULL)
	   {
	   	printf("list is empty");
	   }
	   else
	   {
	   	pre=temp=post=start;
	   	printf("enter value to be deleted:");
	   	scanf("%d",&value);
	   	while(temp->data!=value)
	   	{
	   	    pre=temp;
			temp=temp->rptr;
			post=temp->rptr;	
		   }
		   pre->rptr=post;
		   post->lptr=pre;
		   free(temp);
	   }
	   display();
}
