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
	int b;
	printf("enter of the number b:");
	        scanf("%d",&b);
	int c=0;
	for(int j=0;j<N;j++)
	{
	if(arr[j]==b)
	      {
		
		c++;
	     }
	 }
	printf("%d\n",c);
	return 0;
}
		
		
