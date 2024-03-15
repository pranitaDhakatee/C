#include<stdio.h>

int main()
{
	int N,i,e;
	printf("enter of the number N:");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
	printf("enter of the number %d\n:",i+1);
	scanf("%d",&arr[i]);
	//arr[i]=e;
	}
	
	for(int a=N-1; a>=0;a--)
	{
		printf("%d\n",arr[a]);
	}
return 0;
}

