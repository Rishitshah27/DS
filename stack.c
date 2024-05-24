#include<stdio.h>
#define N 5
int stack[5];
int top=-1;

int push();
int pop();
int peep();
int change();
int display();

int main()
{
	int ch;
	
	while(1)
	{
		printf("\n 1.push \n 2.pop \n 3.peep \n 4.change \n 5.display");
		printf("\n 6.exit");
		printf("\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push(); break;
			case 2: pop();  break;
			case 3: peep(); break;
			case 4: change(); break;
			case 5: display(); break; 
			case 6: exit(0);
		}
	}
}

int push()
{
	int val;
	if(top>=N-1)
	{
		printf("\n stack overflow");
	}
	else
	{
		printf("enter value:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
	display();
}

int pop()
{
	if(top==-1)
	{
		printf("\n stack underflow");
	}
	else
	{
		top=top-1;
		
	}
	display();
}

int peep()
{
	int l;
	printf("enter position:");
	scanf("%d",&l);
	if(top-l+1<0)
	{
		printf("\n stack underflow");
	}
	else
	{
		printf("\n data is:%d",stack[top-l+1]);
	}
}

int change()
{
int l,data;
	printf("enter position:");
	scanf("%d",&l);
	if(top-l+1<0)
	{
		printf("\n stack underflow");
	}
	else
	{
		printf("enter data:");
		scanf("%d",&data);
		stack[top-l+1]=data;
	}	
}

int display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf(" \n %d",stack[i]);
	}
}
