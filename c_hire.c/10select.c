#include<stdio.h>

int main()
{
	int n,temp,m;
	
	printf("enter of the number n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	printf("enter of the number a:");
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
	m=i;
	for(int j=i+1;j<n;j++)
	{
		if(arr[m]>arr[j])
		{
		m=j;
		}
	}
	temp=arr[i];
	arr[i]=arr[m];
	arr[m]=temp;
	}
	for(int i=0;i<n;i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
}		
	
