#include<stdio.h>

int main()
{
	int r;
	printf("enter of the rows:");
	scanf("%d",&r);
	int c;
	printf("enter of the colume:");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	printf("\n");
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	int s=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		s=s+arr[i][j];
		}
	}
	printf("%d",s);
	return 0;
}
		
	
