#include<stdio.h>

int main()
{
	int c,l;
	printf("enter of the number c:");
	scanf("%d",&c);
	int arr[1000];
	for(int i=1;i<=10;i++)
	{
		l=c*i;
		arr[i]=l;
	
	}
	for(int j=1;j<=10;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
	
	

