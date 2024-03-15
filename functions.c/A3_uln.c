#include<stdio.h>

	int InRange(int u,int l,int n)
	{
		if(n>=l && n<=u)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
int main()
{
	int upper,lower,num;
	printf("enter the upper:");
	scanf("%d",&upper);
	printf("enter the lower:");
	scanf("%d",&lower);
	printf("enter the num:");
	scanf("%d",&num);
	if(InRange(upper,lower,num))
	{
	printf("%d specified range.\n",num);
	}
	else
	{
	printf("%d specifide range.\n",num);
	}
	return 0;
}
