#include<stdio.h>

int main()
{
   int N,i,j,a=10,s=0;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>1;i--)
	   {
	   s=s+i;
	   }
	   s=s+a;
	   for(int j=1;j<=N;j++)
		  {
		  	for(int k=1;k<=j;k++)
		  	{
		   	printf("%d ",s);
		   	s=s-1;
		   	}
		   	printf("\n");
		 }
		
	   
	   		
   return 0;
}
     
    
