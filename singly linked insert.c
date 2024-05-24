#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/* stack-push=insert at last
         pop=delete at last
    queue-enqueue-insert at last
          dequeue-delete at first */
struct node{
	int data;
	struct node *link;
}*start;

void finsert();
void linsert();
void fdelete();
void ldelete();
void count();
void display();
void sbefore();
void safter();

void main()
{
	int ch;
	while(1)
	{
		printf("\n1>insert first \n2>insert last \n3>fdelete \n4>ldelete \n5>count \n6>sbefore\nv7>safter \n8>display \n9>exit");
		printf("\n enter your choice:");
		scanf("%d",&ch);
				switch(ch)
		{
			case 1: finsert();
			        break;
			case 2: linsert();
			        break;
			case 3:fdelete();
			       break;
			case 4:ldelete();
			       break;
			case 5:count();
			       break;
			case 6:sbefore();
			       break;
			case 7:safter();
			       break;
			case 8:display(); break;
			case 9: exit(0);
		}
	}
}

void finsert()
{
	struct node*n=(struct node *)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&n->data);
	n->link=NULL;
	if(start==NULL)
	{
		start=n;
	}
	else
	{
		n->link=start;
		start=n;
	}
	display();
}

void linsert()
{
	struct node*n=(struct node *)malloc(sizeof(struct node));
	struct node*temp;
	printf("enter data:");
	scanf("%d",&n->data);
	n->link=NULL;
	if(start==NULL)
	{
		start=n;
	}
	else
	{
		temp=start;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=n;
	}
	display();
}

void fdelete()
{   
    struct node *temp,*pre;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		temp=start;
		start=start->link;
		free(temp);
	}
	display();
}

void ldelete()
{  
     struct node*temp,*pre ;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
	   pre=start;
	   temp=start;
	   while(temp->link!=NULL)
	   {
	   	pre=temp;
	   	temp=temp->link;
			} 
		pre->link=NULL;
		free(temp);	
	}
	display();
}

void count()
{
	struct node*temp;
	temp=start;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
	}
	printf("no of nodes are:%d",c);
}
void display()
{
	struct node*temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->link;
	}
}

void sbefore()
{
	int pos,c=1;
	struct node* temp;
	struct node* post;
	struct node* pre;
	printf("enter position:");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		temp=pre=post=start;
		while(c!=pos-1)
		{
			pre=temp;
			temp=temp->link;
			post=temp->link;
			c++;
		}
		pre->link=post;
		free(temp);
	}
	display();
}

void safter()
{
	int pos,c=1;
	struct node* temp;
	struct node* post;
	struct node* pre;
	printf("enter position:");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		temp=pre=post=start;
		while(c!=pos+1)
		{
			pre=temp;
			temp=temp->link;
			post=temp->link;
			c++;
		}
		pre->link=post;
		free(temp);
	}
	display();
}
