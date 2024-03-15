#include<stdio.h>

int main()
{
	int n;
	printf("enter oft the number n:");
	scanf("%d",&n);
	int arr[n];
	int s=0;
	int m=n/2;
	for(int i=1;i<=m;i++)
	{
		if(n%i==0)
		{
			arr[s]=i;
			s++;
		}
	}
	for(int j=0;j<s;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
