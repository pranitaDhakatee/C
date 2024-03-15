#include<stdio.h>
#include<limits.h>
int main()
{
	int e,N,i;
	printf("enter of the number N:");
	scanf("%d",&N);
	int arr[N];
	int max=INT_MIN;
	for(int i=0;i<N;i++)
	{
	printf("enter of the number e:");
	scanf("%d",&e);
	arr[i]=e;
	}
	for(int j=0; j<=N;j++)
	{
		if(arr[j]>max)
		{
		max=arr[j];
		}
		
	}
	printf("%d\n",max);
return 0;
}

