#include<stdio.h>

int main()
{
   int N,i,k,A;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=N-i;j++)
		  {
		   	printf(" ");
		 }
		 A=N;
		   for(int k=1;k<=i;k++)
		   {
		   	if(k==1)
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
     
    
    
