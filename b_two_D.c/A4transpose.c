#include<stdio.h>

int main()
{
	int r;
	printf("enter of the row:");
	scanf("%d",&r);
	int c;
	printf("enter of the coloum:");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	 int brr[c][r];
	printf("\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
		brr[i][j]=arr[j][i];
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
		printf("%d",brr[i][j]);
		}
		printf("\n");
	}
return 0;
}
//3
//3

//1 2 3
//4 5 6 
//7 8 9 
