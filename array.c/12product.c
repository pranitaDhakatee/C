#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	int p=1;
	for(int i=0;i<=4;i++)
	{
		p=p*arr[i];
	}
	printf("%d",p);
	return 0;
}
	
