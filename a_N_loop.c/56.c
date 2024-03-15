#include<stdio.h>

int main()
{
   int N,i,j,s=1;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=N-i;j++)
		  {
		   	printf("  ");
		 }
		   for(int m=1;m<=i;m++)
		   {
		   	printf("%d ",m);
		   }
	        //  printf("\n");
	   
	   	//int p=i;
	   	for(int k=i-1;k>0;k--)
	   		{
	   				printf("%d ",k);
	   			}
	   	 printf("\n");
	   	 s=s+2;
	   }
	   		
   return 0;
}
     
    
