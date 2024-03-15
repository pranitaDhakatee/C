#include<stdio.h>
#include<limits.h>
int main()
{
	int N,i,a,max=INT_MIN,min=INT_MAX;
	printf("enter the value of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
	printf("enter the value of a:");
	scanf("%d",&a);
	     if(a>max)
	    {
	     max=a;
	    }
	    else if (a<min)
	    {
	       min=a;
	    }
	}
	printf("%d %d\n",max,min);
	return 0;


}
