#include<stdio.h>

int main()
{
	int  n;
	printf("enter of the matrix:");
	scanf("%d",&n);
	int arr[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{
				scanf("%d",arr[i][j]);
			}
	}
	int s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{
				if(i==j)
				{
				s=s+arr[i][j];
				}
				
			}
	}
	printf("%d",&s);
	return 0;
}
	
