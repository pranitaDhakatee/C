#include<stdio.h>

int main()
{
	int N;
	printf("enter of the number N:");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		int e;
		printf("enter of the number e:");
	        scanf("%d",&e);
	        arr[i]=e;
	}
	int c=0;
	for(int j=0;j<N;j++)
	{
		if(arr[j+1]-arr[j]==1)
		{
		c++;
		}
	}
	if(c==N-1) 
	{
		printf("%d",N);
	}
	else 
	{
		printf("invalide");
	}
	return 0;
}
		
		
