#include<stdio.h>

int main()
{
	int arr[6]={5,4,9,2,1,0};
	for(int A=6-1;A>=0;A=A-2)
	{
		printf("%d\n",arr[A]);
	}
	return 0;
}
