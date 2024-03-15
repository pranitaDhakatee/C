#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int k=1;
	for(int i=0;i<N;i++)
	{
	 arr[i]=k;
	 k++;
	}
	for(int j=0;j<N;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
