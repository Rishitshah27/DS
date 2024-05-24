/* insertion sort*/
#include<stdio.h>
int main()
{
	int a[10],i,j,n,index;
	printf("enter a limit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i-1;
		index=a[i];
		while(a[j]>index && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=index;
	}
	printf("\n element after sorting:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}
