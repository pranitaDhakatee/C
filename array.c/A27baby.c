#include<stdio.h>

int main()
{
	int n,i;
	float mean,max,min;
	float size[100];
	int s=0;
	printf("enter of the number n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("baby%d\n",i+1);
	scanf("%f",&weight[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+weight[i];
	}
	mean=s/n;
	max=weight[0];
	for(i=1;i<n;i++)
	{
		if(weight[i]>max)
		{
		max=weight[i];
		}
	}
	min=weight[0];
	for(i=1;i<n;i++)
	{
		if(weight[i]<min)
		{
		min=weight[i];
		}
	}
	printf("mean:%f\n",mean);
	printf("max:%f\n",max);
	printf("min:%f\n",min);
	return 0;
}
