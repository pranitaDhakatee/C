#include<stdio.h>
#include<math.h>
int main()
{
   int N,i,j,a=10,s=0,p,c;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>1;i--)
	   {
	   s=s+i;
	   }
	   s=s+a;
	   a=s;
	   for(int j=1;j<=N;j++)
		  {
		  	for(int k=1;k<=j;k++)
		  	{
		  	p=pow(a,2);
		  	c=p+1;
		   	printf("%d ",c);
		   	a=a-1;
		   	}
		   	printf("\n");
		 }

	   		
   return 0;
}
     
    
