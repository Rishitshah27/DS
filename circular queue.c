#include<stdio.h>
#include<stdlib.h>
#define N 5

void enqueue();
void dequeue();
void display();

int f=-1,r=-1,queue[N];
void main()
{
	int f,r,value;
	int ch;
	
	while(1)
	{
		printf("\n1.enqueue");
		printf("\n2.dequeue");
		printf("\n3.display");
		printf("\n4. Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:enqueue(); break;
			case 2:dequeue(); break;
			case 3:display(); break;
			case 4:exit(0);
		}
	}
}

void enqueue()
{
	int value;
	printf("enter value:");
	scanf("%d",&value);
	if((r>=N-1&&f==0)||f==r+1)
	{
		printf("queue is overflow");
}
	else
	{
		if(r==-1)
		{
			f=0;
			r=0;
		}
		else if(r==N-1)
		{
			r=0;
		}
		else
		{
			r=r+1;
		}
		queue[r]=value;
	}
	display();
	}
	
void dequeue()
{
	if(f==-1)
	{
		printf("queue is underflow");
	}
	else
	{
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else if(f==N-1)
		{
			f=0;
		}
		else
		{
			f=f+1;
		}
	}
	display();
}

void display()
{
	int i;
	if(f<=r)
	{
	for(i=f;i<=r;i++)
	{
		printf("%d ",queue[i]);
	}
}
else
{
	for(i=f;i<=N-1;i++)
	{
			printf("%d ",queue[i]);
	}
	for(i=0;i<=r;i++)
	{
			printf("%d ",queue[i]);
	}
}
}
