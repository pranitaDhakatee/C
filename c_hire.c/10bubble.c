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
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
		printf("%d",arr[i]);
		}
	return 0;
}		
	