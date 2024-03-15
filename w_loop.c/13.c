#include<stdio.h>
#include<limits.h>
int main()
{
	int N,a,b, max=INT_MIN,min=INT_MAX;
	printf("enter the value of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
	printf("enter the value of a:");
	scanf("%d",&a);
	int j=1;
	int a,b, max=INT_MIN,min=INT_MAX;
	     if(j<=a)
       {
	    printf("enter the value of b:");
	    scanf("%d",&b);
	     if (b>max)
	    {
	       max=b;
	    }
	    else if(b<min)
	    {
	    	min=b;
	    }
	    j++;
	}
	i++;
	}
	printf("%d %d\n",max,min);
	return 0;


}rong
