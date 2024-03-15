#include<stdio.h>

int main()
{
	int N;
	char name;
	printf("enter of the number N:");
	scanf("%d",&N);
	char arr[N][20];
	printf("enter of the number name:");
	for(int i=1;i<=N;i++)
	{
		scanf("%s",arr[i]);
		
	}
	for(int j=N;j>0;j--)
	{
		printf("%s ",arr[j]);
	}
	return 0;
}
