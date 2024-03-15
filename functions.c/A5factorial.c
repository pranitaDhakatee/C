#include<stdio.h>

unsigned long long factorial(int n)
{
	if(n==0 || n==1)
	{
	return 1;
	}
	else
	{
	return n*factorial(n-1);
	}
}
int main()
{
	int number;
	scanf("%d",&number);
	if(number<0)
	{
	printf("factorial is not defined negative number.\n");
	}
	else
	{
	unsigned long long result=factorial(number);
	printf("factorial of %d is %llu.\n",number,result);
	}
	return 0;
}	

