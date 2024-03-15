#include<stdio.h>

int isPerfect(int n)
{
	if(n<=0)
	{
	return 0;
	}
	int s=0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	return (s==n);
}
int main()
{
	int num;
	scanf("%d",&num);
	if(isPerfect(num))
	{
		printf("%d is a perfect number.\n",num);
	}
	else
	{
		printf("%d is a not perfect number.\n",num);
	}
	return 0;
}
