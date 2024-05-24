#include<stdio.h>
int main()
{
	int a[10];
	int i,n,search,low,high,mid;
	printf("element to be enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&a[i]);
	}
	printf("enter element to be search:");
	scanf("%d",&search);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search>a[mid])
		{
			low=mid+1;
		}
		else if(search<a[mid])
		{
			high=mid-1;
		}
		else
		{
			printf(" \n element found");
			break;
		}
	}
	if(low>high)
	{
		printf("element not found");
	}
}
