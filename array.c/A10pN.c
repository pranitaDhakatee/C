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
	int c=0,c1=0;
	for(int j=0;j<N;j++)
	{
		if(arr[j]>=0)
		{
		
		c++;
		}
		else
		{
		c1++;
		}
	}
	printf(" %d %d",c,c1);
	return 0;
}
		

