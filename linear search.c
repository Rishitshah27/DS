#include<stdio.h>
int main()
{
	int a[5],i,flag=0,n,search;
	printf("enter limit:");
	scanf("%d",&n);
	printf("\n enter element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n Element not found");
	}
	else
	{
		printf("\n Element found");
	}
}
