#include<stdio.h>

int main()
{
   int N,i,k,A;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>0;i--)
	   {
	   for(int j=1;j<=N-i;j++)
		  {
		   	printf(" ");
		 }
		 A=N;
		   for(int k=i;k>0;k--)
		   {
		   	if(k==i)
		   	{
		   	printf("%d ",i);
		   	}else
		   	{
		   		printf("%d ",A);
		   		A=A-1;
		   	}
		   }
	   	 printf("\n");
	   
	   }
	   		
   return 0;
}
     
    
    
