/* SELECTION SORT */
#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter a limit:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf(" \n element after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
}
