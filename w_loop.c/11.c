#include<stdio.h>
#include<limits.h>
int main()
{
	int N,i,a,max=INT_MIN,smax=0;
	printf("enter the value of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
	printf("enter the value of a:");
	scanf("%d",&a);
	     if(a>max)
	    {
	     smax=max;
	     max=a;
	    }
	    else if (a>smax)
	    {
	       smax=a;
	    }
	}
	printf("%d \n",smax);
	return 0;


}
