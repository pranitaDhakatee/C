#include<stdio.h>

int main()
{
   int N,i,k,a=1,m=1;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>0;i--)
	   {
	   for(int j=1;j<=N-i;j++)
		  {
		   	printf(" ");
		 }
		   for(int k=N;k>=a;k--)
		   {
		   	printf("%d ",k);
		   }
	        //  printf("\n");
	   
	   	int p=i;
	   	for(int l=1;l<=N-i;l++)
	   		{
	   				printf("  ");
	   			}
	       for(int b=m;b<=N;b++)
	       {
	       			printf("%d ",b);
	       			}	
	   	 printf("\n");
	         m=m+1;
	         a=a+1;
	   }
	   		
   return 0;
}
     
    
    
