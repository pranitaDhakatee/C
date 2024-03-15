#include<stdio.h>

int main()
{
	int arr[5] ={2,4,6,8,1};
	arr[4] = 100;
	arr[1] = 1;
	printf("%d\n",arr[1]);//{2,1,6,8,100}
	return 0;
}
