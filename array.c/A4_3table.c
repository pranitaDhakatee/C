#include<stdio.h>

int main()
{
	int arr[10];
	//int c=3;
	int p=1;
	for(int i=0;i<10;i++)
	{
		int c=3;
		c=c*p;
		arr[i]=c;
		p=p+1;
	}
	for(int j=0;j<10;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
	
	
	
