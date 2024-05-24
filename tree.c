#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*lptr;
	struct node*rptr;
}*root;

void insert();
void inorder(struct node *);

void main()
{
	int ch;
	while(1)
	{
		printf("\n1.insert");
		printf("\n2.inorder");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        	case 1:insert(); break;
        	case 2:inorder(root); break;
        	case 3:exit(0);
		}
	}
	
}

void inorder(struct node *temp)
{
	if(temp==NULL)
	{
		printf("\n tree is empty");
	}
	else
	{
		if(temp->lptr!=NULL)
		{
			inorder(temp->lptr);
		}
		printf("%d--",temp->data);
		if(temp->rptr!=NULL)
		{
			inorder(temp->rptr);
		}
	}
}

void insert()
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*pre=(struct node*)malloc(sizeof(struct node));
	struct node*n=(struct node*)malloc(sizeof(struct node));
	
	printf("enter data:");
	scanf("%d",&n->data);
	n->lptr=NULL;
	n->rptr=NULL;
	if(root==NULL)
	{
		root=n;
	}
	else
	{
		temp=root;
		pre=root;
		while(temp!=NULL)
		{
			if(n->data<temp->data)
			{
				pre=temp;
				temp=temp->lptr;
			}
			else
			{
				pre=temp;
				temp=temp->rptr;
			}
		}

	}
	if(n->data<pre->data)
	{
		pre->lptr=n;
		}
		else
		{
			pre->rptr=n;
		}
}
