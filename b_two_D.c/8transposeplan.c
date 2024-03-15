#include<stdio.h>

int main()
{
	int n;
	printf("enter of the row/coloum:");
	scanf("%d",&n);
	printf("enter of the element:");
	int arr[n][n];
	//input
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//transpose
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
		//swap
		int temp=arr[i][j];
		arr[i][j]=arr[j][i];
		arr[j][i]=temp;
		}
	}
	//output
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		printf("%d",arr[i][j]);
		}
	printf("\n");	
	}
return 0;
}
//3
//1 2 3
//4 5 6
//7 8 9

//1 4 7
//2 5 8
//3 6 9
