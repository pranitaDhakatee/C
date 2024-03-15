#include<stdio.h>

int main()
{
   int N,i,k;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>0;i--)
	   {
	   for(int j=1;j<=i;j++)
		  {
		   	printf("* ");
		 }
		   for(int k=N-i;k>0;k--)
		   {
		   	printf("    ");
		   }
	        //  printf("\n");
	   
	   	int p=i;
	   	for(int l=1;l<=p;l++)
	   		{
	   				printf("* ");
	   			}
	   	 printf("\n");
	   
	   }
	   		
   return 0;
}
     
    
    
