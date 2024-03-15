#include<stdio.h>
#include<limits.h>
int main()
{
	int N,i,a,max=INT_MIN,smax=0,tmax=0;
	printf("enter the value of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
	printf("enter the value of a:");
	scanf("%d",&a);
	     if(a>max)
	    {
	     tmax=smax;
	     smax=max;
	     max=a;
	    }
	    else if (a>smax)
	    {
	       tmax=smax;
	       smax=a;
	    }
	    else if (a>tmax)
	    {
	    	tmax=a;
	    }
	}
	printf("%d \n",tmax);
	return 0;


}
