#include<stdio.h>

int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int c=0;
	int x=3;
	for(int i=0;i<=6;i++)
	{
		if(arr[i]>=x)
		c++;
	}
	printf("%d",c);
	return 0;
}
	
