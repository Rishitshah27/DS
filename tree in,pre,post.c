#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node*lptr;
	struct node*rptr;
}*root;

void insert();
void inorder(struct node *);
void preorder(struct node*);
void postorder(struct node*);

void main()
{
	int ch;
	while(1)
	{
		printf("\n 1>insert");
		printf("\n 2>inorder");
		printf("\n 3>preorder");
		printf("\n 4>postorder");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:inorder(root);
			        break;
			case 3:preorder(root);
			        break;
			case 4:postorder(root);
			        break;
			case 5:exit(0);
		}
	}
}

void postorder(struct node *temp)
{
	if(temp==NULL)
	{
		printf("\n tree is empty");
	}
	else
	{
		if(temp->lptr!=NULL)
		{
			postorder(temp->lptr);
		}
		if(temp->rptr!=NULL)
		{
			postorder(temp->rptr);
		}
		printf("%d--",temp->data);
	}
	
}

void preorder(struct node*temp)
{
	if(temp==NULL)
	{
		printf("\n tree is empty");
	}
	else
	{
		printf("%d--",temp->data);
		if(temp->lptr!=NULL)
		{
			preorder(temp->lptr);
		}
		if(temp->rptr!=NULL)
		{
			preorder(temp->rptr);
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
