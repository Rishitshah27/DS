/* BUBBLE SORT */
#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp=0;
	printf("enter a limit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n element after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	
}
