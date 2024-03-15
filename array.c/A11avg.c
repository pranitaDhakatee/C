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
	int s=0,A;
	for(int j=0;j<N;j++)
	{
		s=s+arr[j];
	}
	A=s/N;
	printf("%d %d",s,A);
	return 0;
}
		
		
