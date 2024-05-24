#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
}*start;
void finsert();
void linsert();
void beforeinsert();
void fdelete();
void ldelete();
void afterdelete();
void display();

void main()
{
	int ch;
	while(1)
	{
		printf("\n1>finsert");
		printf("\n2>linsert");
		printf("\n3>beforeinsert");
		printf("\n4>fdelete");
		printf("\n5>ldelete");
		printf("\n6>afterdelete");
		printf("\n7>exit");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:finsert();
			       break;
			case 2:linsert();
			       break;
			case 3:beforeinsert();
			       break;
			case 4:fdelete();
			       break;
			case 5:ldelete();
			       break;
			case 6:afterdelete();
			       break;
			case 7:exit(0);
		}
	}
}

/*void finsert()
{
    struct node*n=(struct node *)malloc(sizeof(struct node));
    struct node *temp;
    printf("enter data:");
    scanf("%d",&n->data);
	if(start==NULL)
	{
		start=n;
		start->link=start;
	}
	else
	{
		temp=start;
		while(temp->link!=start)
		{
			temp=temp->link;
		}
		n->link=start;
		start=n;
		temp->link=start;
	}
	display();
}*/


void linsert()
{
	struct node*n=(struct node *)malloc(sizeof(struct node));
	struct node *temp;
	printf("enter data:");
	scanf("%d",&n->data);
	if(start==NULL)
	{
		start=n;
		start->link=start;
	}
	else{
		temp=start;
		while(temp->link!=start)
		{
			temp=temp->link;
		}
		temp->link=n;
		n->link=start;
	}
	display();
}


void beforeinsert()
{
	struct node*n=(struct node *)malloc(sizeof(struct node));
	struct node *temp,*pre;
	int value;
	printf("enter value before which node to be added:");
	scanf("%d",&value);
	
	printf("enter data:");
	scanf("%d",&n->data);
	
	if(start==NULL)
	{
		start=n;
		start->link=start;
	}
	else{
		pre=temp=start;
		while(temp->data!=value)
		{
			pre=temp;
			temp=temp->link;
		}
		pre->link=n;
		n->link=temp;
	}
	display();
}

void fdelete()
{
	struct node*temp,*last;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		last=start;
		temp=start;
		while(last->link!=start)
		{
			last=last->link;
		}
		start=start->link;
		last->link=start;
		free(temp);
	}
	display();
}

/*void ldelete()
{
	struct node *temp,*pre;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else{
		pre=temp=start;
		while(temp->link!=start)
		{
			pre=temp;
			temp=temp->link;
		}
		pre->link=start;
		free(temp);
	}
	display();
}*/

void afterdelete()
{
	struct node *temp,*post;
	int val;
	printf(" \nenter val:");
	scanf("%d",&val);
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		temp=post=start;
		while(temp->data!=val)
		{
			temp=temp->link;
			post=temp->link;
		}
		temp->link=post->link;
		free(post);
	}
	display();
}

void display()
{
	struct node*temp;
	temp=start;
	while(temp->link!=start)
	{
		printf("%d ->",temp->data);
		temp=temp->link;
	}
	printf("%d ->",temp->data);
}
