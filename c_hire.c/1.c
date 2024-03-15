#include<stdio.h>

int main()
{
	int n,temp,m,i;
	
	printf("enter of the number n:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	printf("enter of the number a:");
	scanf("%d",&arr[i]);
	}
		//for(int i=0;i<n;i++)
		//{
			for(int j=i;j>=1;j--)
			{
				if(arr[j-1]>arr[j])
				{
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
				}
			}
		for(int i=0;i<n;i++)
		{
		printf("%d",arr[i]);
		}
	return 0;
}		
	
	
