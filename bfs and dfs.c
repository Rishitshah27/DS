//bfs
#include<stdio.h>
int n,i,j,visited[10],queue[10],front=-1,rear=-1;
int adj[10][10];

void bfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(adj[v][i]&&!visited[i])
		{
			queue[++rear]=i;
		}
	}
	if(front<=rear)
	{
		visited[queue[front]]=1;
		bfs(queue[front++]);
	}
}



void main()
{
	int v;
	printf("enter no of vertices:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		queue[i]=0;
		visited[i]=0;
	}
	printf("enter graph data in matrix form:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	printf("enter starting vertex:");
	scanf("%d",&v);
	bfs(v);
	printf("the node which are reachable:\n");
	for(i=1;i<=n;i++)
	{
		if(visited[i])
		{
			printf("%d \t",i);
		}
		else
		{
			printf("bfs is not possible,not all nodes are reachable");
		}
	}
	
}
