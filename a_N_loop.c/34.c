#include<stdio.h>

int main()
{
   int N,i,j,k;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
	   {
	   for(int j=1;j<=(N-i);j++)
		   {
		   	printf(" ");
		   }
		
		 	  for(int k=1;k<=i;k++)
		   	{
		   		printf("* ");
		   	}
	   
	   printf("\n");
	   }
   return 0;
}
     
    
