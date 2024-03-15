#include<stdio.h>

int main()
{
	int n;
	printf("enter of the number n:");
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
	scanf("%d",&b[i]);
	}
	int c[2*n];
	int i=0,j=0,k=0;
	while(i<n && j<n)
	{
		if(a[i]<=b[j])
			{
			c[k]=b[j];
			j++;
			}
			k++;
	}
	while(i<n)
	{
	c[k]=a[i];
	i++;
	k++;
	}
	while(j<n)
	{
	c[k]=b[i];
	i++;
	k++;
	}
	for(int i=0;i<2*n;i++)
	{
	printf("%d",c[i]);
	}
	return 0;
}	
