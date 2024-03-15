#include<stdio.h>
#define SIZE 100
int main()
{
	int arr[SIZE];
	for(int i=0;i<SIZE;i++)
	{
	arr[i]=i+1;
	}
	for(int i=SIZE-1; i>=0;i--)
	{
		printf("%d ",arr[i]);	
	}
	
return 0;
}

