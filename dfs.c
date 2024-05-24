//dfs
#include<stdio.h>
int n,i,j,visited[10],stack[10],top=-1;
int adj[10][10];

void dfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(adj[v][i]&&!visited[i])
		{
			stack[++top]=i;
		}
	}
	if(top!=-1)
	{
		visited[stack[top]]=1;
		dfs(stack[top]);
	}
}

void main()
{
	int v;
	printf("enter no of vertices:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		stack[i]=0;
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
	dfs(v);
	printf("the node which are reachable:\n");
	for(i=1;i<=n;i++)
	{
		if(visited[i])
		{
			printf("%d \t",i);
		}
		else
		{
			printf("dfs is not possible,not all nodes are reachable");
		}
	}
	
}
