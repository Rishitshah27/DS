#include<stdio.h>
int main()
{
	int i,j,n,a[10],temp;
	printf("enter limit:");
	scanf("%d",&n);
	printf("\n enter element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\n element after sorting are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d \n",a[i]);
	}
	return 0;
}
